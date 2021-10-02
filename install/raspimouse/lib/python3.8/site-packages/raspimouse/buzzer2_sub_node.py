# colcon build
# source ~/ros2_ws/install/setup.bash
# ros2 topic pub -1 /buzzer std_msgs/msg/String '{data: Hello}'

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class BuzzerSubscriber(Node):

    def __init__(self):
        super().__init__('buzzer_subscriber')
        self.subscription = self.create_subscription(
            String,
            '/buzzer',
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
    rclpy.shutdown()


if __name__ == '__main__':
    main()
