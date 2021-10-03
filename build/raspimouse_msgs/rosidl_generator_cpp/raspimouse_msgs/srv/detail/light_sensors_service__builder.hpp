// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspimouse_msgs:srv/LightSensorsService.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__LIGHT_SENSORS_SERVICE__BUILDER_HPP_
#define RASPIMOUSE_MSGS__SRV__DETAIL__LIGHT_SENSORS_SERVICE__BUILDER_HPP_

#include "raspimouse_msgs/srv/detail/light_sensors_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raspimouse_msgs
{

namespace srv
{

namespace builder
{

class Init_LightSensorsService_Request_left_forward
{
public:
  explicit Init_LightSensorsService_Request_left_forward(::raspimouse_msgs::srv::LightSensorsService_Request & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::srv::LightSensorsService_Request left_forward(::raspimouse_msgs::srv::LightSensorsService_Request::_left_forward_type arg)
  {
    msg_.left_forward = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::srv::LightSensorsService_Request msg_;
};

class Init_LightSensorsService_Request_left_side
{
public:
  explicit Init_LightSensorsService_Request_left_side(::raspimouse_msgs::srv::LightSensorsService_Request & msg)
  : msg_(msg)
  {}
  Init_LightSensorsService_Request_left_forward left_side(::raspimouse_msgs::srv::LightSensorsService_Request::_left_side_type arg)
  {
    msg_.left_side = std::move(arg);
    return Init_LightSensorsService_Request_left_forward(msg_);
  }

private:
  ::raspimouse_msgs::srv::LightSensorsService_Request msg_;
};

class Init_LightSensorsService_Request_right_side
{
public:
  explicit Init_LightSensorsService_Request_right_side(::raspimouse_msgs::srv::LightSensorsService_Request & msg)
  : msg_(msg)
  {}
  Init_LightSensorsService_Request_left_side right_side(::raspimouse_msgs::srv::LightSensorsService_Request::_right_side_type arg)
  {
    msg_.right_side = std::move(arg);
    return Init_LightSensorsService_Request_left_side(msg_);
  }

private:
  ::raspimouse_msgs::srv::LightSensorsService_Request msg_;
};

class Init_LightSensorsService_Request_right_forward
{
public:
  Init_LightSensorsService_Request_right_forward()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightSensorsService_Request_right_side right_forward(::raspimouse_msgs::srv::LightSensorsService_Request::_right_forward_type arg)
  {
    msg_.right_forward = std::move(arg);
    return Init_LightSensorsService_Request_right_side(msg_);
  }

private:
  ::raspimouse_msgs::srv::LightSensorsService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::srv::LightSensorsService_Request>()
{
  return raspimouse_msgs::srv::builder::Init_LightSensorsService_Request_right_forward();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace srv
{

namespace builder
{

class Init_LightSensorsService_Response_sum
{
public:
  Init_LightSensorsService_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::srv::LightSensorsService_Response sum(::raspimouse_msgs::srv::LightSensorsService_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::srv::LightSensorsService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::srv::LightSensorsService_Response>()
{
  return raspimouse_msgs::srv::builder::Init_LightSensorsService_Response_sum();
}

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__LIGHT_SENSORS_SERVICE__BUILDER_HPP_
