#!/usr/bin/env python

# colcon build
# source ~/ros2_ws/install/setup.bash

# ros2 launch raspimouse_launch raspimouse_launch.py
# ros2 service call /motor_on std_srvs/srv/Trigger
# ros2 run raspimouse_run_corridor wall_stop

import rclpy,copy
from geometry_msgs.msg import Twist
from raspimouse_msgs.action import MoveRobot
from std_srvs.srv import Trigger
from raspimouse_msgs.msg import LightSensors
from rclpy.node import Node
from rclpy.action import ActionClient
import time

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
        
        self._action_client = ActionClient(self, MoveRobot, '/move')


    def callback(self, msg):
        self.sensor_values = msg
        #self.get_logger().info('I heard right_forward : "%d"' % msg.right_forward)
        #self.get_logger().info('I heard right_side : "%d"' % msg.right_side)
        #self.get_logger().info('I heard left_side : "%d"' % msg.left_side)
        #self.get_logger().info('I heard left_forward : "%d"' % msg.left_forward)
    
    # '{linear_x: 0.0, linear_y: 0.0, linear_z: 0.0, angular_x: 0.0, angular_y: 0.0, angular_z: 1.0}'
    def send_goal(self, pos_x, pos_y, ang_z):
        goal_msg = MoveRobot.Goal()
        goal_msg.x = pos_x
        goal_msg.y = pos_y
        goal_msg.z = ang_z

        # アクションサーバーが開始されるのを待つ
        self._action_client.wait_for_server()
        
        self.get_logger().info('I heard left_forward : "%d"' % self.sensor_values.left_forward)

        self._send_goal_future = self._action_client.send_goal_async(goal_msg)

        self._send_goal_future.add_done_callback(self.goal_response_callback)
        

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
    
    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(result.message)
        rclpy.shutdown()
    
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        #self.get_logger().info('Received feedback: {0}'.format(feedback.partial_sequence))

def main(args=None):
    rclpy.init(args=args)
    action_client = WallStop()
    action_client.send_goal(0.0, 0.5, 0.0)  
    rclpy.spin(action_client)


if __name__ == '__main__':
    main()
