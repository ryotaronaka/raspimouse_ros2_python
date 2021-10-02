import rclpy
from rclpy.node import Node
from std_msg import UInt16


class BuzzerSubscriber(Node):

    def __init__(self):
        super().__init__('buzzer_subscriber')
        self.subscription = self.subscription(
            UInt16,
            'buzzer',
            self.listener_callback,
            10
        )
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info('I heard:"%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)
    buzzer_subscriber_node = BuzzerSubscriber()
    rclpy.spin(buzzer_subscriber_node)
    sclpy.shutdown()


if __name__ == '__main__':
    main()
