#!/usr/bin/env python

# colcon build
# source ~/ros2_ws/install/setup.bash

# ros2 launch raspimouse_launch raspimouse_launch.py
# ros2 service call /motor_on std_srvs/srv/Trigger
# ros2 run raspimouse_run_corridor wall_stop

import rclpy,copy,math
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
        
        self.get_logger().info('Executing goal...')
        vel_ = 0.1
        old_distance = 0.0
        target_vel = Twist()
        
        target_x = pos_x
        target_y = pos_y
        target_z = ang_z
        
        #decide velocity
        if target_x == 0.0 and target_y == 0.0:
            target_vel.linear.x = 0.0
            target_vel.linear.y = 0.0
            target_vel.linear.z = 0.0
        else:
            target_dir = math.atan2(target_x, target_y)
            target_vel.linear.y = vel_ * math.cos(target_dir)
            target_vel.linear.x = vel_ * math.sin(target_dir)
            target_vel.linear.z = 0.0

        target_distance = math.sqrt(target_x*target_x+target_y*target_y)
        self.get_logger().info('target_distance : "%f"' % target_distance)
        self.get_logger().info('target_dir : "%f"' % target_dir)

        goal_msg = MoveRobot.Goal()
        # アクションサーバーが開始されるのを待つ
        self._action_client.wait_for_server()
        result_code = "UNKOWN"

        while rclpy.ok() and result_code == "UNKOWN":
            #if goal_handle.is_cancel_requested():
            #    result.message = "Canceled"
            #    goal_handle.canceled(result)
            #    break
            if old_distance >= target_distance:
                result_code == "KOWN"
                goal_msg.x = 0.0
                goal_msg.y = 0.0
                goal_msg.z = 0.0
                self._send_goal_future = self._action_client.send_goal_async(goal_msg)
                #self.cmd_vel(0.0, 0.0) #stop
                #result = MoveRobot.Result()
                #result.message = 'MoveRobot suceeded.'
                #return result
                break
            else:
                goal_msg.x =  target_vel.linear.x
                goal_msg.y =  target_vel.linear.y
                goal_msg.z = 0.0
                self.get_logger().info('goal_msg.x : "%f"' % goal_msg.x)
                self.get_logger().info('goal_msg.y : "%f"' % goal_msg.y)
                self.get_logger().info('goal_msg.z : "%f"' % goal_msg.z)

                self._send_goal_future = self._action_client.send_goal_async(goal_msg)
                self._send_goal_future.add_done_callback(self.goal_response_callback)
                
                old_distance = old_distance + target_vel.linear.x
                
                self.get_logger().info('old_distance : "%f"' % old_distance)
                time.sleep(2.5)

        

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
    action_client.send_goal(0.5, 0.0, 0.0)  
    rclpy.spin(action_client)


if __name__ == '__main__':
    main()
