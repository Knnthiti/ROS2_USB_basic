from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="usb_v1",
                namespace="usb",
                executable="talker",
                name="USB",
            ),
            Node(
                package="usb_v1",
                namespace="usb",
                executable="listener",
                name="PrintData",
            ),
        ]
    )
