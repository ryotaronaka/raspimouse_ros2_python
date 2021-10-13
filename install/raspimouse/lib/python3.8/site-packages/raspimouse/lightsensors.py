# ros2 run raspimouse lightsensors --ros-args -p lightsensors_freq:=1
# ros2 run raspimouse lightsensors --ros-args --params-file ~/ros2_ws/src/raspimouse/raspimouse/parameter.yaml

import rclpy, sys
from rclpy import timer
from rclpy.node import Node
# from std_msgs.msg import Int16MultiArray
from raspimouse_msgs.msg import LightSensors

class LightSensors_Node(Node):
    def __init__(self):
        super().__init__('lightsensors')
        self.publisher_ = self.create_publisher( 
            LightSensors, #Int16MultiArray,
            'lightsensors',
            10
        )

        timer_period = self.get_freq()
        self.timer = self.create_timer(timer_period, self.timer_callback)

        print("*** lightsensors node ***")

    def timer_callback(self):
        devfile = '/dev/rtlightsensor0'
        try:
            with open(devfile, 'r') as f:
                data = f.readline().split()
                data = [ int(e) for e in data ]
                msg = LightSensors()
                msg.right_forward = data[0]
                msg.right_side = data[1]
                msg.left_side = data[2]
                msg.left_forward = data[3]
                msg.sum_all = sum(data)
                msg.sum_forward = data[0]+data[3]
                
                # self.get_logger().info("right_forward : %d" % msg.right_forward)
                # self.get_logger().info("left_forward : %d" % msg.left_forward)
                # self.get_logger().info("sum_forward : %d" % msg.sum_forward)

                # msg=Int16MultiArray()
                # msg.data.append(data[0])
                # msg.data.append(data[1])
                # msg.data.append(data[2])
                # msg.data.append(data[3])
                # msg.data.append(sum(data))
                # msg.data.append(data[0]+data[3])
                # self.get_logger().info("right_forward : %d" % data[0])
                # self.get_logger().info("left_forward : %d" % data[3])
                
                self.publisher_.publish(msg)

        except IOError:
            self.get_logger().info("cannot write to " + devfile)

    def get_freq(self):
        f = self.declare_parameter('lightsensors_freq', 5)
        f = f._value
        # self.get_logger().info("lightsensors_freq : {0}".format(f))
        self.get_logger().info("lightsensors_freq : %d" % f)
        try:
            if f <= 0:
                raise Exception()
        except:
            self.get_logger().info("value error: lightsensors_freq")
            sys.exit(1)
        
        return f


def main(args=None):
    rclpy.init(args=args)
    ls_node = LightSensors_Node()
    rclpy.spin(ls_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()