from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='lesson_python_pkg',
            executable='talker',
            name='talker_node',
            output='screen'
        ),
        Node(
            package = 'lesson_python_pkg',
            executable='listener',
            name = 'listener_node',
            output = 'screen'
        ),
    ])