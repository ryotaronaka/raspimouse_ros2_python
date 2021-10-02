from setuptools import setup

package_name = 'raspimouse'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'buzzer_node = raspimouse.buzzer_node:main',
            'buzzer2_sub_node = raspimouse.buzzer2_sub_node:main',
            'buzzer3_sub_node = raspimouse.buzzer3_sub_node:main',
            'lightsensor_sub = raspimouse.lightsensor_sub:main',
            'lightsensors = raspimouse.lightsensors:main',
            'motors1 = raspimouse.motors1:main',
            'motors2 = raspimouse.motors2:main',
            'motors = raspimouse.motors:main',
        ],
    },
)
