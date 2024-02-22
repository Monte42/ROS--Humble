from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    
    rb_station1_node = Node(
        package='my_py_pkg',
        executable='robot_new_staton',
        name='news_1',
        parameters=[{'robots_name': "Bumble Bee"}]
    )
    rb_station2_node = Node(
        package='my_py_pkg',
        executable='robot_new_staton',
        name='news_2',
        parameters=[{'robots_name': "Megatron"}]
    )
    rb_station3_node = Node(
        package='my_py_pkg',
        executable='robot_new_staton',
        name='news_3',
        parameters=[{'robots_name': "Starscreen"}]
    )
    rb_station4_node = Node(
        package='my_py_pkg',
        executable='robot_new_staton',
        name='news_4',
        parameters=[{'robots_name': "Randy"}]
    )
    rb_station5_node = Node(
        package='my_py_pkg',
        executable='robot_new_staton',
        name='news_5'
    )
    smartphone_node = Node(
        package='my_py_pkg',
        executable='smartphone'
    )
    
    ld.add_action(rb_station1_node)
    ld.add_action(rb_station2_node)
    ld.add_action(rb_station3_node)
    ld.add_action(rb_station4_node)
    ld.add_action(rb_station5_node)
    ld.add_action(smartphone_node)
    
    return ld