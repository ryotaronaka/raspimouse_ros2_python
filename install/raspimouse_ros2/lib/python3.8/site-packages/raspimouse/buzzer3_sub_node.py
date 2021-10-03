# colcon build
# source ~/ros2_ws/install/setup.bash
# ros2 run raspimouse buzzer3_sub_node
# ros2 topic pub -1 /buzzer std_msgs/msg/Int16 '{data: 1000}'

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16


class BuzzerSubscriber(Node):

    def __init__(self):
        super().__init__('buzzer_subscriber')
        self.subscription = self.create_subscription(
            Int16,
            '/buzzer',
            self.listener_callback,
            10
        )
        self.subscription

    def write_freq(self, hz=0):
        bfile = "/dev/rtbuzzer0"
        try:
            with open(bfile,"w") as f:
                f.write(str(hz)+"\n")
        except IOError:
            rclpy.get_logger().info("can't write to " + bfile)

    def listener_callback(self, msg):
        self.get_logger().info('I heard:"%d"' % msg.data)
        self.write_freq(msg.data)    


def main(args=None):
    rclpy.init(args=args)
    buzzer_subscriber_node = BuzzerSubscriber()
    rclpy.spin(buzzer_subscriber_node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
