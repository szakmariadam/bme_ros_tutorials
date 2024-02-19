#include <ros/ros.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "basic_node");
    ros::NodeHandle nh;

    ros::Rate loop_rate(1);

    int count = 0;
    while(ros::ok())
    {
        ROS_INFO("basic_node cpp is running, count = %d", count);

        count++;

        loop_rate.sleep();
    }
}