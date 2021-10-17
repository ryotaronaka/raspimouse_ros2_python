#!/usr/bin/env python

# colcon build
# source ~/ros2_ws/install/setup.bash

# ros2 launch raspimouse_launch raspimouse_launch.py
# ros2 service call /motor_on std_srvs/srv/Trigger
# ros2 run raspimouse_run_corridor wall_stop

import rclpy
from geometry_msgs.msg import Twist
from std_srvs.srv import Trigger
from raspimouse_msgs.msg import LightSensors
from rclpy.node import Node

class WallStop(Node):
    def __init__(self):
        super().__init__('wall_stop')
        # コンストラクター定義は，service nodeと同じタイプと名前のclient nodeを作成する．
        # タイプと名前は，clientとserviceが通信できるように一致する必要がある．
        self.cli = self.create_client(Trigger, '/motor_on')
        
        # clientのタイプと名前に一致するserviceが利用可能かどうか，1秒に1回チェック．
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/motor_on service not available, waiting again...')
        
        # リクエスト定義
        self.sensor_values = LightSensors()
        self.subscription = self.create_subscription(
            LightSensors, # Int16MultiArray,
            'lightsensors',
            self.callback,
            10
        )

        self._publisher = self.create_publisher( 
            Twist,
            '/cmd_vel',
            10
        )

        timer_period = 1.0
        self.timer = self.create_timer(timer_period, self.run_callback)
    
    def callback(self, msg):
        self.sensor_values = msg
        #self.get_logger().info('I heard right_forward : "%d"' % msg.right_forward)
        #self.get_logger().info('I heard right_side : "%d"' % msg.right_side)
        #self.get_logger().info('I heard left_side : "%d"' % msg.left_side)
        #self.get_logger().info('I heard left_forward : "%d"' % msg.left_forward)
    
    def run_callback(self):
        data = Twist()
        data.linear.x = 0.1 if self.sensor_values.sum_all < 300 else 0.0
        self._publisher.publish(data)

def main(args=None):
    rclpy.init(args=args)
    wall_stop = WallStop()
    rclpy.spin(wall_stop)
    wall_stop.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
