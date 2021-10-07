# ros2 launch raspimouse_launch raspimouse_launch.py
# 
# raspimouse/raspimouse/parameter.yaml
# パラメータファイルを自分で下記パスへ貼る必要あり(ファイルを置かないとエラーが出るので、パスがわかる)
# /home/ubuntu/ros2_ws/install/raspimouse_launch/share/raspimouse_launch/cfg/_parameter.yaml

from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from os.path import join

def generate_launch_description():
    pkg_prefix = get_package_share_directory('raspimouse_launch') #install folder
    return LaunchDescription([
        Node(
            package='raspimouse',
            executable='buzzer',
        ),
        Node(
            package='raspimouse',
            executable='lightsensors',
            parameters=[
                join(pkg_prefix, 'cfg/_parameter.yaml') #if ros2 don't read parameter.yaml, copy the yaml to cfg folder.
                #{"lightsensors_freq": 1}
            ]
        ),
        Node(
            package='raspimouse',
            executable='motors',
        ),
        Node(
            package='raspimouse',
            executable='move',
        )
    ])