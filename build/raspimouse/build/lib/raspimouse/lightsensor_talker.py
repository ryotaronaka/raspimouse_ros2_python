import rclpy
from rclpy.node import Node

from light_sensor_values.msg import LightSensorValues    # CHANGE


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(LightSensorValues, 'topic', 10)     # CHANGE
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = LightSensorValues()                             # CHANGE
        msg.right_forward = self.i                                      # CHANGE
        msg.right_side = self.i                                      # CHANGE
        msg.left_side = self.i                                      # CHANGE
        msg.left_forward = self.i
        msg.sum_all = self.i*4
        msg.sum_forward = self.i*2                                     # CHANGE
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing right_forward: "%d"' % msg.right_forward)  # CHANGE
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()