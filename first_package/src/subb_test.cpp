#include <ros/ros.h>
#include <std_msgs/String.h>

void callback_receive(const std_msgs::String& msg)
{
	ROS_INFO("Message received : %s", msg.data.c_str());
}

int main(int argc, char **argv)
{
	ros::init(argc,argv,"sub_test");
	ros::NodeHandle nh;

	ros::Subscriber sub = nh.subscribe("/test_node",1000,callback_receive);

	ros::spin();
}
