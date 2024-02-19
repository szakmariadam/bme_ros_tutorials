import rospy

count=0
rospy.init_node('basic_node')
rate = rospy.rate(1)

while not rospy.is_shutdown():
    rospy.loginfo("basic node py is running. count= %d", count)
    count=+1
    rate.sleep()