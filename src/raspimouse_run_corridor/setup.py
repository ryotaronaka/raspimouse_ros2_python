from setuptools import setup

package_name = 'raspimouse_run_corridor'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='34445043+ryotaronaka@users.noreply.github.com',
    description='Raspimouse ROS2 Run Corridor',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'wall_stop_service = raspimouse_run_corridor.wall_stop_service:main',
            'wall_stop = raspimouse_run_corridor.wall_stop:main',
            '_wall_stop = raspimouse_run_corridor._wall_stop:main',
        ],
    },
)
