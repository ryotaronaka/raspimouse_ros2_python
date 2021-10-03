# 
# colcon build
# source ~/ros2_ws/install/setup.bash
# ros2 run raspimouse buzzer_node

import rclpy
from rclpy import timer
from rclpy.node import Node
from std_msgs.msg import Int16

class BuzzerPublisher(Node):
    def __init__(self):
        super().__init__('buzzer_publisher')
        self.publisher_ = self.create_publisher(
            Int16, 
            '/buzzer', 
            10
        )
        timer_period = 0.01 #sec
        self.timer = self.create_timer(timer_period, self.timer_callback)

        print("*** raspimouse buzzer node ***")
        print("Input frequency(Hz), then press Enter key.")
    
    def timer_callback(self):
        hz = input("buzzer frequency <<")
        try:
            hz = int(hz)
            print("Frequency=", hz)
            msg = Int16() # important point. Must use msg.
            msg.data = hz
            self.publisher_.publish(msg)
            self.get_logger().info("frequency : %d" % msg.data)
        except ValueError:
            self.get_logger().info("Your type string is not Integer. ")
        except IOError:
             self.get_logger().info("Happen IOError.")

def main(args=None):
    rclpy.init(args=args)
    buzze_pub_node = BuzzerPublisher()
    rclpy.spin(buzze_pub_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
