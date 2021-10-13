# ros2 run raspimouse motors1
# ros2 topic pub -1 /motor_raw raspimouse_msgs/MotorFreqs '{left_hz: 400, right_hz: 200}'
# ros2 topic pub -1 /cmd_vel geometry_msgs/Twist '{linear: {x: 0.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.0}}'
# sudo echo 0 > /dev/rtmotor_raw_l0
# sudo echo 0 > /dev/rtmotor_raw_r0
# sudo echo 0 > /dev/rtmotoren0

import rclpy, sys, math
from rclpy import timer
from rclpy.node import Node
from rclpy.clock import Clock, ClockType
from rclpy.time import Time

from raspimouse_msgs.msg import MotorFreqs
from geometry_msgs.msg import Twist

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
        
        self.last_time = self.get_clock().now()
        self.using_cmd_vel = False
    
        timer_period = 1 # second
        self.timer = self.create_timer(timer_period, self.timer_callback)
        print("*** motors node ***")

    
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

def main(args=None):
    rclpy.init(args=args)
    motor = Motor()
    rclpy.spin(motor)
    rclpy.shutdown()

if __name__ == '__main__':
    main()