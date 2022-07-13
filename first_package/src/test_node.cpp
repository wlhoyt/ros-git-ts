#include <ros/ros.h>
#include <std_msgs/String.h>

int main (int argc, char **argv)
{
        ros::init(argc, argv,"test_node");
        ros::NodeHandle nh;

        ros::Publisher pub = nh.advertise<std_msgs::String>("/test_node",10);
        ros::Rate rate(3);

        while(ros::ok()){
                std_msgs::String msg;
                msg.data = "Hi, this William from the Robot News Radio";
                pub.publish(msg);
                rate.sleep();
        }
}

