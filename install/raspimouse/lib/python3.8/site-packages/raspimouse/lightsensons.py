import rclpy
from rclpy.node import Node

from light_sensor_values.msg import LightSensorValues    # CHANGE

if __name__ == '__main__':
    devfile = '/dev/rtlightsensor0'
    rclpy.__init__('lightsensors')
    pub = rclpy.create_publisher(LightSensorValues, 'lightsensors', 10)

    rate = rclpy.Rate(10)
    while not rclpy.is_shutdown():
        try:
            with open(devfile, 'r') as f:
                data = f.readline().split()
                data = [ int(e) for e in data ]
                d = LightSensorValues()
                d.right_forward = data[0]
                d.right_side = data[1]
                d.left_side = data[2]
                d.left_forward = data[3]
                d.sum_all = sum(data)
                d.sum_forward = data[0]+data[3]
                pub.publish(d)
        except IOError:
            rclpy.get_logger().info("cannot write to " + devfile)

        rate.sleep()