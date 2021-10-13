# colcon build
# source ~/ros2_ws/install/setup.bash
# ros2 run raspimouse buzzer3_sub_node
# ros2 topic pub -1 /buzzer std_msgs/msg/Int16 '{data: 1000}'

# if you chage raspimouse_msgs/action/Music.action
# . install/setup.bash

# ros2 run raspimouse buzzer
# ros2 action send_goal /music raspimouse_msgs/action/Music '{freqs: [349, 392, 440, 0], durations: [1.0, 2.0, 3.0]}'

import threading
import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16
from rclpy.action import ActionServer, CancelResponse, GoalResponse

from raspimouse_msgs.action import Music

class BuzzerActionServer(Node):

    def __init__(self):
        super().__init__('music')

        self._goal_handle = None
        self._goal_lock = threading.Lock()

        self._action_server = ActionServer(
            self,
            Music,
            '/music',
            execute_callback = self.execute_callback,
            goal_callback = self.goal_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback
        )

        print("*** Music Action Start ***")

    def write_freqs(self, hz=0):
        self.get_logger().info('write frequency...')
        bfile = "/dev/rtbuzzer0"
        try:
            with open(bfile,"w") as f:
                f.write(str(hz)+"\n")
        except IOError:
            rclpy.get_logger().info("can't write to " + bfile)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        goal_msg_freqs = goal_handle.request.freqs
        result = Music.Result()
        feedback_msg = Music.Feedback()

        for i, f in enumerate(goal_msg_freqs): # インデックス番号, 要素の順に取得できる
            self.get_logger().info("Freq : %s" % f)
            self.write_freqs(f)
            if i >= len(goal_handle.request.durations):
                time.sleep(1.0)
            else:
                self.get_logger().info("duration : %s" % goal_handle.request.durations[i])
                time.sleep(float(goal_handle.request.durations[i]))

        result.finished = True
        feedback_msg.remaining_steps = 1
        goal_handle.publish_feedback(feedback_msg)
        goal_handle.succeed()
        
        return result

    def goal_callback(self, goal_request):
        self.get_logger().info('Received goal request')
        return GoalResponse.ACCEPT
    
    def handle_accepted_callback(self, goal_handle):
        with self._goal_lock:
            if self._goal_handle is not None and self._goal_handle.is_active:
                self.get_logger().info('Aborting previous goal')
                self._goal_handle.abort()
            self._goal_handle = goal_handle

        goal_handle.execute()
    
    def cancel_callback(self, goal):
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT
    
    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    buzzer_action_server = BuzzerActionServer()
    rclpy.spin(buzzer_action_server)
    buzzer_action_server.destroy()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
