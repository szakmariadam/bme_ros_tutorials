#include "ros/ros.h"
#include "std_msgs/Int32.h"

void sub_cd(const std_msgs::Int32::ConstPtr &msg)
{
    ROS_INFO("Received data from publisher_topic: [%ld]", (long int)msg->data);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "subscriber");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("publisher_topic", 10, sub_cd);

    ROS_INFO("Subscriber C++ node has started and subsribed to publisher_topic");

    ros::spin();

    return 0;
}