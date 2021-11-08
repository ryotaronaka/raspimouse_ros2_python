#!/usr/bin/env python

# colcon build
# source ~/ros2_ws/install/setup.bash

# ros2 launch raspimouse_launch raspimouse_launch.py
# ros2 service call /motor_on std_srvs/srv/Trigger
# ros2 run raspimouse_run_corridor wall_stop

import rclpy
from raspimouse_msgs.action import MoveRobot
from std_srvs.srv import Trigger
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus

class WallStop(Node):
    def __init__(self):
        super().__init__('wall_stop_multi_node')
        # コンストラクター定義は，service nodeと同じタイプと名前のclient nodeを作成する．
        # タイプと名前は，clientとserviceが通信できるように一致する必要がある．
        self.cli = self.create_client(Trigger, '/motor_on')
        
        # clientのタイプと名前に一致するserviceが利用可能かどうか，1秒に1回チェック．
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/motor_on service not available, waiting again...')
        
        self._action_client = ActionClient(self, MoveRobot, '/moter_action_server')
   
    # '{linear_x: 0.0, linear_y: 0.0, linear_z: 0.0, angular_x: 0.0, angular_y: 0.0, angular_z: 1.0}'
    def send_goal(self, pos_x, pos_y, ang_z):
        goal_msg = MoveRobot.Goal()
        goal_msg.x = pos_x
        goal_msg.y = pos_y
        goal_msg.z = ang_z

        # アクションサーバーが開始されるのを待つ
        self._action_client.wait_for_server()
        
        #Lightsensorの情報は、司令を出した側には戻ってこない
        #self.get_logger().info('I heard sum_all : "%d"' % self.sensor_values.sum_all)

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

        return self._send_goal_future
        
    # 呼び出しタイミング：アクションの目標値設定時
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
    
    # 呼び出しタイミング：アクションのフィードバック受信時
    def feedback_callback(self, feedback_msg):
        self.get_logger().info('feedback:{}'.format(feedback_msg.feedback.d))
    
    # 呼び出しタイミング：アクションの実行結果受信時
    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(result.message)

        #status = future.result().action_status
        #if status == GoalStatus.STATUS_SUCCEEDED:
        #    self.get_logger().info('result:{}'.format(future.result().result))

        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    action_client = WallStop()
    future = action_client.send_goal(0.0, 0.5, 0.0) # Vector: x(side +:right, -:left), y(+:forward, -:back), z(no-use) / unit(m)
    rclpy.spin(action_client)
    #action_client.destroy_node()
    #rclpy.shutdown()

if __name__ == '__main__':
    main()
