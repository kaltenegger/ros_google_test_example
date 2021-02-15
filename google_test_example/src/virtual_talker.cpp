// Copyright 2021 Eugen Kaltenegger

#include "../include/virtual_talker.h"

void Virtual::Talker::setPublisher(Virtual::Publisher* virtual_publisher)
{
  this->virtual_publisher = virtual_publisher;
}

void Virtual::Talker::publish(const std_msgs::String& message) const
{
  ROS_DEBUG("virtual publish function is invoked");
  this->virtual_publisher->publish(message);
}
