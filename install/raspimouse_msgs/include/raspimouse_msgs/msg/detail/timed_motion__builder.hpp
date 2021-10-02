// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspimouse_msgs:msg/TimedMotion.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__TIMED_MOTION__BUILDER_HPP_
#define RASPIMOUSE_MSGS__MSG__DETAIL__TIMED_MOTION__BUILDER_HPP_

#include "raspimouse_msgs/msg/detail/timed_motion__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raspimouse_msgs
{

namespace msg
{

namespace builder
{

class Init_TimedMotion_duration_ms
{
public:
  explicit Init_TimedMotion_duration_ms(::raspimouse_msgs::msg::TimedMotion & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::msg::TimedMotion duration_ms(::raspimouse_msgs::msg::TimedMotion::_duration_ms_type arg)
  {
    msg_.duration_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::msg::TimedMotion msg_;
};

class Init_TimedMotion_right_hz
{
public:
  explicit Init_TimedMotion_right_hz(::raspimouse_msgs::msg::TimedMotion & msg)
  : msg_(msg)
  {}
  Init_TimedMotion_duration_ms right_hz(::raspimouse_msgs::msg::TimedMotion::_right_hz_type arg)
  {
    msg_.right_hz = std::move(arg);
    return Init_TimedMotion_duration_ms(msg_);
  }

private:
  ::raspimouse_msgs::msg::TimedMotion msg_;
};

class Init_TimedMotion_left_hz
{
public:
  Init_TimedMotion_left_hz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimedMotion_right_hz left_hz(::raspimouse_msgs::msg::TimedMotion::_left_hz_type arg)
  {
    msg_.left_hz = std::move(arg);
    return Init_TimedMotion_right_hz(msg_);
  }

private:
  ::raspimouse_msgs::msg::TimedMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::msg::TimedMotion>()
{
  return raspimouse_msgs::msg::builder::Init_TimedMotion_left_hz();
}

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__TIMED_MOTION__BUILDER_HPP_
