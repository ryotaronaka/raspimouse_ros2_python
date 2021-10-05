from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='raspimouse',
            executable='buzzer',
            #required="true",
            #output="screen",
        ),
        Node(
            package='raspimouse',
            executable='lightsensors',
            parameters=[
                {"lightsensors_freq": 1}
            ]
            #required="true",
            #output="screen",
        ),
        Node(
            package='raspimouse',
            executable='motors',
            #required="true",
            #output="screen",
        )
    ])