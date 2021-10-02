// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspimouse_msgs:srv/TimedMotionService.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__TIMED_MOTION_SERVICE__BUILDER_HPP_
#define RASPIMOUSE_MSGS__SRV__DETAIL__TIMED_MOTION_SERVICE__BUILDER_HPP_

#include "raspimouse_msgs/srv/detail/timed_motion_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raspimouse_msgs
{

namespace srv
{

namespace builder
{

class Init_TimedMotionService_Request_duration_ms
{
public:
  explicit Init_TimedMotionService_Request_duration_ms(::raspimouse_msgs::srv::TimedMotionService_Request & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::srv::TimedMotionService_Request duration_ms(::raspimouse_msgs::srv::TimedMotionService_Request::_duration_ms_type arg)
  {
    msg_.duration_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::srv::TimedMotionService_Request msg_;
};

class Init_TimedMotionService_Request_right_hz
{
public:
  explicit Init_TimedMotionService_Request_right_hz(::raspimouse_msgs::srv::TimedMotionService_Request & msg)
  : msg_(msg)
  {}
  Init_TimedMotionService_Request_duration_ms right_hz(::raspimouse_msgs::srv::TimedMotionService_Request::_right_hz_type arg)
  {
    msg_.right_hz = std::move(arg);
    return Init_TimedMotionService_Request_duration_ms(msg_);
  }

private:
  ::raspimouse_msgs::srv::TimedMotionService_Request msg_;
};

class Init_TimedMotionService_Request_left_hz
{
public:
  Init_TimedMotionService_Request_left_hz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedMotionService_Request_right_hz left_hz(::raspimouse_msgs::srv::TimedMotionService_Request::_left_hz_type arg)
  {
    msg_.left_hz = std::move(arg);
    return Init_TimedMotionService_Request_right_hz(msg_);
  }

private:
  ::raspimouse_msgs::srv::TimedMotionService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::srv::TimedMotionService_Request>()
{
  return raspimouse_msgs::srv::builder::Init_TimedMotionService_Request_left_hz();
}

}  // namespace raspimouse_msgs


namespace raspimouse_msgs
{

namespace srv
{

namespace builder
{

class Init_TimedMotionService_Response_success
{
public:
  Init_TimedMotionService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspimouse_msgs::srv::TimedMotionService_Response success(::raspimouse_msgs::srv::TimedMotionService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::srv::TimedMotionService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::srv::TimedMotionService_Response>()
{
  return raspimouse_msgs::srv::builder::Init_TimedMotionService_Response_success();
}

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__TIMED_MOTION_SERVICE__BUILDER_HPP_
