from setuptools import setup
import os
from glob import glob

package_name = 'raspimouse'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/' + package_name + '_launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='ubuntu@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'buzzer_pub_node = raspimouse.buzzer_pub_node:main',
            'buzzer2_sub_node = raspimouse.buzzer2_sub_node:main',
            'buzzer3_sub_node = raspimouse.buzzer3_sub_node:main',
            'buzzer4_sub_node = raspimouse.buzzer4_sub_node:main',
            'buzzer = raspimouse.buzzer:main',
            'lightsensors_sub = raspimouse.lightsensors_sub:main',
            'lightsensors = raspimouse.lightsensors:main',
            'motors1 = raspimouse.motors1:main',
            'motors2 = raspimouse.motors2:main',
            'motors = raspimouse.motors:main',
            'move = raspimouse.move:main',
        ],
    },
)
