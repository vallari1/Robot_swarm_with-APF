#!/usr/bin/env python3

import rospy
from geometry_msgs.msg import Twist, Point
from nav_msgs.msg import Odometry
import numpy as np

class SwarmController:
    def __init__(self):
        rospy.init_node('swarm_controller')

        self.target_locations = {
            'robot1': np.array([5, 5]),
            'robot2': np.array([5, -5]),
            'robot3': np.array([-5, 5]),
            'robot4': np.array([-5, -5])
        }

        self.attractive_constant = rospy.get_param("~attractive_constant", 1.0)
        self.repulsion_constant = rospy.get_param("~repulsion_constant", 1.0)
        self.min_distance = rospy.get_param("~min_distance", 1.0)
        self.max_speed = rospy.get_param("~max_speed", 0.5)
        self.robot_positions = {}
        self.vel_publishers = {}
        self.target_pub = rospy.Publisher('/swarm_target', Point, queue_size=10)

        rospy.Subscriber('/keyboard/cmd_vel', Twist, self.keyboard_callback)

        # Register robots
        for robot_name in ["robot1", "robot2", "robot3", "robot4"]:
            self.register_robot(robot_name)

    def register_robot(self, robot_name):
        topic = f"/{robot_name}/odom"
        rospy.Subscriber(topic, Odometry, self.update_robot_position, robot_name)
        self.vel_publishers[robot_name] = rospy.Publisher(f"/{robot_name}/cmd_vel", Twist, queue_size=10)

    def update_robot_position(self, msg, robot_name):
        self.robot_positions[robot_name] = np.array([msg.pose.pose.position.x, msg.pose.pose.position.y])

    def compute_velocity(self, robot_name):
        robot_position = self.robot_positions.get(robot_name)
        if robot_position is None:
            return Twist()

        target_location = self.target_locations[robot_name]
        attractive_force = self.attractive_force(robot_position, target_location)
        repulsive_force = self.repulsive_force(robot_position, robot_name)
        net_force = attractive_force + repulsive_force

        # Limit the velocity to max speed
        magnitude = np.linalg.norm(net_force)
        if magnitude > self.max_speed:
            net_force = (net_force / magnitude) * self.max_speed

        velocity = Twist()
        velocity.linear.x = net_force[0]
        velocity.linear.y = net_force[1]
        return velocity

    def attractive_force(self, robot_position, target_location):
        direction = target_location - robot_position
        magnitude = np.linalg.norm(direction)
        if magnitude == 0:
            return np.zeros(2)
        unit_direction = direction / magnitude
        return unit_direction * self.attractive_constant

    def repulsive_force(self, robot_position, robot_name):
        repulsive_force = np.zeros(2)
        for other_robot_name, other_robot_position in self.robot_positions.items():
            if other_robot_name != robot_name:
                direction = robot_position - other_robot_position
                distance = np.linalg.norm(direction)
                if distance < self.min_distance and distance > 0:
                    unit_direction = direction / distance
                    repulsive_force += unit_direction * self.repulsion_constant * ((1 / distance) - (1 / self.min_distance)) / (distance**2)
        return repulsive_force

    def publish_target_location(self):
        for target_location in self.target_locations.values():
            self.target_pub.publish(Point(x=target_location[0], y=target_location[1]))

    def keyboard_callback(self, msg):
        pass

    def run(self):
        rate = rospy.Rate(10)  # 10 Hz
        while not rospy.is_shutdown():
            for robot_name in self.robot_positions.keys():
                velocity = self.compute_velocity(robot_name)
                self.vel_publishers[robot_name].publish(velocity)
                rospy.loginfo(f"{robot_name} moving with velocity: {velocity.linear.x}, {velocity.linear.y}")
            rate.sleep()

if __name__ == "__main__":
    controller = SwarmController()
    controller.run()
