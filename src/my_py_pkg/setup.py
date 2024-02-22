from setuptools import find_packages, setup

package_name = 'my_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gary',
    maintainer_email='gdumond42@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            #  new_name = pkg_dir_name.node_flie_name.main_func
            "py_node = my_py_pkg.my_first_node:main",
            "robot_new_staton = my_py_pkg.robot_news_station:main",
            "smartphone = my_py_pkg.smartphone:main",
            "my_counter = my_py_pkg.my_counter:main",
            "count_catch = my_py_pkg.count_catch:main",
            "add_two_ints_server = my_py_pkg.add_two_ints_server:main",
            "add_two_ints_client = my_py_pkg.add_two_ints_client:main",
            "add_two_ints_client_oop = my_py_pkg.add_two_ints_client_oop:main",
            "hw_status_publisher = my_py_pkg.hw_status_publisher:main",
            "battery_node = my_py_pkg.battery_node:main",
            "led_panel_node = my_py_pkg.led_panel_node:main",
        ],
    },
)
