from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    
    remapped_num_topic = ('number', 'my_number')
    
    number_publiser_node = Node(
        package= "my_py_pkg",
        executable='my_counter',
        name='number_publisher',
        remappings=[remapped_num_topic],
        parameters=[{'num_to_pub': 10},{'pub_freq': 5.0}]
    )
    counter_node = Node(
        package= "my_py_pkg",
        executable='count_catch',
        name='number_counter',
        remappings=[remapped_num_topic, ('curr_count', 'new_count')]
    )
    
    ld.add_action(number_publiser_node)
    ld.add_action(counter_node)
    
    return ld