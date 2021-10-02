import rclpy
from rclpy.node import Node

# from light_sensor_values.msg import LightSensorValues    # CHANGE
from std_msgs.msg import Int16MultiArray

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Int16MultiArray,                                              # CHANGE
            'lightsensors',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
            #self.get_logger().info('I heard right_forward : "%d"' % msg.right_forward) # CHANGE
            #self.get_logger().info('I heard right_side : "%d"' % msg.right_side) # CHANGE
            #self.get_logger().info('I heard left_side : "%d"' % msg.left_side) # CHANGE
            #self.get_logger().info('I heard left_forward : "%d"' % msg.left_forward) # CHANGE
            self.get_logger().info('I heard right_forward : "%d"' % msg.data[0]) # CHANGE
            self.get_logger().info('I heard right_side : "%d"' % msg.data[1]) # CHANGE
            self.get_logger().info('I heard left_side : "%d"' % msg.data[2]) # CHANGE
            self.get_logger().info('I heard left_forward : "%d"' % msg.data[3]) # CHANGE
            #print("*** lightsensors_listener node ***")


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()