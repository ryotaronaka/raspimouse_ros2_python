# if you chage raspimouse_msgs/action/Movement.action
# . install/setup.bash

# ros2 run raspimouse move
# ros2 service call /motor_off std_srvs/srv/Trigger
# ros2 service call /motor_on std_srvs/srv/Trigger
# ros2 action send_goal /move raspimouse_msgs/action/Movement '{linear_x: 0.0, linear_y: 0.0, linear_z: 0.0, angular_x: 0.0, angular_y: 0.0, angular_z: 1.0}'
# linear_x: 0.2, angular_z: 1.0
# ros2 action send_goal /move raspimouse_msgs/action/MoveRobot '{x: 0.5, y: 0.0, z: 0.0}'


import rclpy, sys, math
import threading
import time
from rclpy import timer
from rclpy.node import Node
from rclpy.clock import Clock, ClockType
from rclpy.time import Time

from raspimouse_msgs.msg import MotorFreqs
from geometry_msgs.msg import Twist
from std_srvs.srv import Trigger
from raspimouse_msgs.srv import TimedMotionService

from rclpy.action import ActionServer, CancelResponse, GoalResponse

from raspimouse_msgs.action import Movement
from raspimouse_msgs.action import MoveRobot

class Motor(Node):
    def __init__(self):
        super().__init__('motors')
        if not self.set_power(True): sys.exit(1)

        if self.set_power == False:
            self.shutdown()

        self.sub_raw = self.create_subscription(
            MotorFreqs,
            'motor_raw', 
            self.callback_raw_freq,
            10)
        
        self.srv_on = self.create_service(
            Trigger,
            'motor_on',
            self.callback_on,
        )

        self.srv_off = self.create_service(
            Trigger,
            'motor_off',
            self.callback_off,
        )

        #--- Action ---#
        self._goal_handle = None
        self._goal_lock = threading.Lock()
        self._action_server = ActionServer(
            self,
            MoveRobot,
            '/move',
            execute_callback = self.execute_callback, # Callback function for processing accepted goals.
            goal_callback = self.goal_callback,
            #handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback
        )

        print("*** move action ***")


    def set_power(self, onoff=False):
        en = "/dev/rtmotoren0"
        try:
            with open(en, 'w') as f:
                f.write("1\n" if onoff else "0\n")
            self.is_on = onoff
            return True
        except:
            self.get_logger().info("cannot write to %s" % en)
        
        return False

    
    def set_raw_freq(self, left_hz, right_hz):
        if not self.is_on:
            self.get_logger().info("not enpowerd")
            return

        try:
            with open("/dev/rtmotor_raw_l0", 'w') as lf, \
                open("/dev/rtmotor_raw_r0", 'w') as rf:
                lf.write(str(int(round(left_hz))) + "\n")
                rf.write(str(int(round(right_hz))) + "\n")
        except:
            self.get_logger().info("cannot write to rtmotor_raw_*")
    
    def callback_raw_freq(self, message):
        self.set_raw_freq(message.left_hz, message.right_hz)

    def onoff_response(self, onoff):
        d = Trigger.Response()
        d.success = self.set_power(onoff) 
        d.message = "ON" if self.is_on else "OFF"
        return d

    def callback_on(self, request, response):
        return self.onoff_response(True)
    
    def callback_off(self, request, response):
        return self.onoff_response(False)

    def cmd_vel(self, linear_x, angular_z):
        forward_hz = 80000.0*linear_x/(9*math.pi)
        rot_hz = 400.0*angular_z/math.pi
        right_adj = 1.15
        self.set_raw_freq(forward_hz - rot_hz, (forward_hz+rot_hz)*right_adj)
        self.using_cmd_vel = True
        self.last_time = self.get_clock().now()
        self.get_logger().info("pull cmd_vel : %s" % self.last_time)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        
        vel_ = 0.1
        old_distance = 0.0
        target_vel = Twist()

        target_x = goal_handle.request.x
        target_y = goal_handle.request.y
        target_z = goal_handle.request.z

        self.get_logger().info('target_x : "%f"' % target_x)

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

        self.create_rate(2)

        #/*** フィードバックとリザルトの宣言 ***/
        feedback = MoveRobot.Feedback()
        result = MoveRobot.Result()
        
        while rclpy.ok():
            #if goal_handle.is_cancel_requested():
            #    result.message = "Canceled"
            #    goal_handle.canceled(result)
            #    break
            if old_distance >= target_distance:
                result.message = "Succeeded"
                goal_handle.succeed()
                self.cmd_vel(0.0, 0.0) #stop
                result = MoveRobot.Result()
                result.message = 'MoveRobot Finished.'
                return result
                break
            else:
                feedback.x =  old_distance*math.cos(target_dir) + target_vel.linear.x
                feedback.y =  old_distance*math.sin(target_dir) + target_vel.linear.y
                feedback.z = 0.0
                goal_handle.publish_feedback(feedback)
                self.cmd_vel(target_vel.linear.x, target_vel.linear.y)
                old_distance = old_distance + target_vel.linear.x
                self.get_logger().info('old_distance : "%f"' % old_distance)
                #result = MoveRobot.Result()
                #result.message = 'MoveRobot NEXT.'
                #return result
            time.sleep(2.5) 

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
    motor = Motor()
    rclpy.spin(motor)
    motor.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()