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

        # cycle time(int)
        self.duration_ms = 1000

        #--- Action ---#
        self._goal_handle = None
        self._goal_lock = threading.Lock()
        self._action_server = ActionServer(
            self,
            MoveRobot,
            '/move',
            #execute_callback = self.execute_callback, # Callback function for processing accepted goals.
            execute_callback = self.execute_callback_simple,
            goal_callback = self.goal_callback,
            #handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback
        )

        print("*** move action ***")
    
    def execute_callback_simple(self, goal_handle):
        self.get_logger().info('Executing goal(simple)...')
        target_x = goal_handle.request.x
        target_y = goal_handle.request.y
        target_z = goal_handle.request.z
        target_vel = Twist()

        self.get_logger().info('target_x : "%f"' % target_x)

        #decide velocity
        if target_x == 0.0 and target_y == 0.0:
            target_vel.linear.x = 0.0
            target_vel.linear.y = 0.0
            target_vel.angular.z = 0.0
        else:
            target_dir = math.atan2(target_x, target_y) # ｘが進行方向、ｙが横方向
            target_vel.linear.y = math.cos(target_dir)
            target_vel.linear.x = math.sin(target_dir)
            target_vel.angular.z = 0.0
            # 計算がおかしいので修正すること

        target_distance = math.sqrt(target_x*target_x+target_y*target_y)
        self.get_logger().info('target_distance : "%f"' % target_distance)
        self.get_logger().info('target_dir : "%f"' % target_dir)

        #/*** フィードバックとリザルトの宣言 ***/
        feedback = MoveRobot.Feedback()
        result = MoveRobot.Result()

        #*** Run ***
        self.cmd_vel(target_vel) # unit:m/s
        #time.sleep(self.duration_ms/1000 + 0.2)
        #*** Wait for result ***
            
        feedback.x = math.cos(target_dir) + target_vel.linear.x
        feedback.y = math.sin(target_dir) + target_vel.linear.y
        feedback.z = 0.0
        goal_handle.publish_feedback(feedback)

        goal_handle.succeed()
        #self.cmd_vel(0.0, 0.0) #stop
        result.message = 'MoveRobot suceeded.'
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
    

    #*** Motor ***

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
                self.get_logger().info("set_raw_freq : left %f" % left_hz)
                self.get_logger().info("set_raw_freq : right %f" % right_hz)
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

    def cmd_vel(self, target_vel): # m/s が送られてきている
        self.get_logger().info("cmd_vel requested.")
        forward_hz = 80000.0*target_vel.linear.x/(9*math.pi)
        rot_hz = 400.0*target_vel.angular.z/math.pi
        right_adj = 1.15

        self.get_logger().info("cmd_vel requested_2.")
        self.get_logger().info("cmd_vel requested_3.")
        left_hz = int(round(forward_hz - rot_hz))
        right_hz = int(round((forward_hz + rot_hz)*right_adj))
        self.get_logger().info("cmd_vel requested_5.")

        self.get_logger().info("left_hz/s : %d" % left_hz)
        self.get_logger().info("right_hz/s : %d" % right_hz)

        return_tm = self.timedmotion(left_hz, right_hz)
    
    #motors.py : ros2 service call /timed_motion raspimouse_msgs/srv/TimedMotionService "{left_hz: 300, right_hz: -300, duration_ms: 500}"
    def timedmotion(self, left_hz, right_hz):
        if not self.is_on:
            self.get_logger().info("not enpowered")
            return 0
        
        dev = "/dev/rtmotor0"
        try:
            with open(dev, 'w') as f:
                f.write("%s %s %s\n" % (str(left_hz), str(right_hz), str(self.duration_ms)))
                self.last_time = self.get_clock().now()
                self.get_logger().info("pull TimedMotion : %s" % self.last_time)

        except:
            self.get_logger().info("cannot write to " + dev)
            return 0
        
        return 1

def main(args=None):
    rclpy.init(args=args)
    motor = Motor()
    rclpy.spin(motor)
    motor.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()