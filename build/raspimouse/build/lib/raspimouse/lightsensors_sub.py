# ros2 run raspimouse lightsensors_sub

import rclpy
from rclpy.node import Node

from raspimouse_msgs.msg import LightSensors
# from std_msgs.msg import Int16MultiArray

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('lightsensors2_subscriber')
        self.subscription = self.create_subscription(
            LightSensors, # Int16MultiArray,
            'lightsensors',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
            self.get_logger().info('I heard right_forward : "%d"' % msg.right_forward)
            self.get_logger().info('I heard right_side : "%d"' % msg.right_side)
            self.get_logger().info('I heard left_side : "%d"' % msg.left_side)
            self.get_logger().info('I heard left_forward : "%d"' % msg.left_forward)
            # self.get_logger().info('I heard right_forward : "%d"' % msg.data[0]) # CHANGE
            # self.get_logger().info('I heard right_side : "%d"' % msg.data[1]) # CHANGE
            # self.get_logger().info('I heard left_side : "%d"' % msg.data[2]) # CHANGE
            # self.get_logger().info('I heard left_forward : "%d"' % msg.data[3]) # CHANGE
            #print("*** lightsensors_listener node ***")


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()