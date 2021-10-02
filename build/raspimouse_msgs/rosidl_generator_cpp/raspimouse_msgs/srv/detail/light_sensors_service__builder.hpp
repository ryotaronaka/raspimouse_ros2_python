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

class Init_LightSensorsService_Request_d
{
public:
  explicit Init_LightSensorsService_Request_d(::raspimouse_msgs::srv::LightSensorsService_Request & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::srv::LightSensorsService_Request d(::raspimouse_msgs::srv::LightSensorsService_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::srv::LightSensorsService_Request msg_;
};

class Init_LightSensorsService_Request_c
{
public:
  explicit Init_LightSensorsService_Request_c(::raspimouse_msgs::srv::LightSensorsService_Request & msg)
  : msg_(msg)
  {}
  Init_LightSensorsService_Request_d c(::raspimouse_msgs::srv::LightSensorsService_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_LightSensorsService_Request_d(msg_);
  }

private:
  ::raspimouse_msgs::srv::LightSensorsService_Request msg_;
};

class Init_LightSensorsService_Request_b
{
public:
  explicit Init_LightSensorsService_Request_b(::raspimouse_msgs::srv::LightSensorsService_Request & msg)
  : msg_(msg)
  {}
  Init_LightSensorsService_Request_c b(::raspimouse_msgs::srv::LightSensorsService_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_LightSensorsService_Request_c(msg_);
  }

private:
  ::raspimouse_msgs::srv::LightSensorsService_Request msg_;
};

class Init_LightSensorsService_Request_a
{
public:
  Init_LightSensorsService_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightSensorsService_Request_b a(::raspimouse_msgs::srv::LightSensorsService_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_LightSensorsService_Request_b(msg_);
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
  return raspimouse_msgs::srv::builder::Init_LightSensorsService_Request_a();
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
