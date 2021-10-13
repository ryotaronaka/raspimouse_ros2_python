# if you chage raspimouse_msgs/action/Movement.action
# . install/setup.bash

# ros2 run raspimouse move
# ros2 service call /motor_off std_srvs/srv/Trigger
# ros2 service call /motor_on std_srvs/srv/Trigger
# ros2 action send_goal /move raspimouse_msgs/action/Movement '{linear_x: 0.0, linear_y: 0.0, linear_z: 0.0, angular_x: 0.0, angular_y: 0.0, angular_z: 1.0}'
# linear_x: 0.2, angular_z: 1.0

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
        self.sub_cmd_vel = self.create_subscription(
            Twist,
            'cmd_vel', 
            self.callback_cmd_vel,
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

        self.srv_tm = self.create_service(
            TimedMotionService,
            'timed_motion',
            self.callback_tms,
        )

        self.last_time = self.get_clock().now()
        self.using_cmd_vel = False
    
        timer_period = 1 # second
        self.timer = self.create_timer(timer_period, self.timer_callback)

        print("*** motors service start. ***")
        #--- Action ---#

        self._goal_handle = None
        self._goal_lock = threading.Lock()

        self._action_server = ActionServer(
            self,
            Movement,
            '/move',
            execute_callback = self.execute_callback,
            goal_callback = self.goal_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback
        )

        print("*** move action ***")

    
    def timer_callback(self):
        #while not rclpy.shutdown():
        latest_time = self.get_clock().now()
        # print(self.last_time)
        # print(latest_time)
        d =latest_time - self.last_time
        delta = float(d.nanoseconds)/1000000000.0 # 1,000,000,000 nanoSec = 1 sec
        #print(delta)
        if self.using_cmd_vel and delta >= 1.0:
            self.set_raw_freq(0,0)
            self.using_cmd_vel = False
            print("*** motors node auto stop ***")


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

    
    def callback_cmd_vel(self, message):
        forward_hz = 80000.0*message.linear.x/(9*math.pi)
        rot_hz = 400.0*message.angular.z/math.pi
        self.set_raw_freq(forward_hz - rot_hz, forward_hz+rot_hz)
        self.using_cmd_vel = True
        self.last_time = self.get_clock().now()
        self.get_logger().info("pull cmd_vel : %s" % self.last_time)
    
    def onoff_response(self, onoff):
        d = Trigger.Response()
        d.success = self.set_power(onoff) 
        d.message = "ON" if self.is_on else "OFF"
        return d

    def callback_on(self, request, response):
        return self.onoff_response(True)
    
    def callback_off(self, request, response):
        return self.onoff_response(False)
    
    def callback_tms(self, request, response):
        if not self.is_on:
            self.get_logger().info("not enpowered")
            return response
        
        # print("left right duration: %d %d %d\n" % (request.left_hz, request.right_hz, request.duration_ms))
        dev = "/dev/rtmotor0"
        try:
            # print("*** write /dev/rtmotor0 ***")
            with open(dev, 'w') as f:
                f.write("%s %s %s\n" % (str(request.left_hz), str(request.right_hz), str(request.duration_ms)))
                # print("*** motors run on service ***")

        except:
            self.get_logger().info("cannot write to " + dev)
            return response
        
        return response
    


    def write_cmd_vel(self, linear_x, angular_z):
        forward_hz = 80000.0*linear_x/(9*math.pi)
        rot_hz = 400.0*angular_z/math.pi
        self.set_raw_freq(forward_hz - rot_hz, forward_hz+rot_hz)
        self.using_cmd_vel = True
        self.last_time = self.get_clock().now()
        self.get_logger().info("pull cmd_vel : %s" % self.last_time)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        goal_msg_linear_x = goal_handle.request.linear_x
        goal_msg_angular_z = goal_handle.request.angular_z
        result = Movement.Result()
        feedback_msg = Movement.Feedback()

        self.write_cmd_vel(goal_msg_linear_x, goal_msg_angular_z)

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
    motor = Motor()
    rclpy.spin(motor)
    motor.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()