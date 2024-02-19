#include "ros/ros.h"
#include "std_msgs/Int32.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "publisher");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<std_msgs::Int32>("publisher_topic", 10);

    ROS_INFO("Publisher C++ node has started and publishing data on publisher_topic");

    ros::Rate loop_rate(1);

    std_msgs::Int32 count;

    count.data = 0;

    while (ros::ok())
    {
        pub.publish(count);

        count.data++;
        loop_rate.sleep();
    }
}
