// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspimouse_msgs:msg/MotorFreqs.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__MOTOR_FREQS__BUILDER_HPP_
#define RASPIMOUSE_MSGS__MSG__DETAIL__MOTOR_FREQS__BUILDER_HPP_

#include "raspimouse_msgs/msg/detail/motor_freqs__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raspimouse_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorFreqs_left_hz
{
public:
  explicit Init_MotorFreqs_left_hz(::raspimouse_msgs::msg::MotorFreqs & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::msg::MotorFreqs left_hz(::raspimouse_msgs::msg::MotorFreqs::_left_hz_type arg)
  {
    msg_.left_hz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::msg::MotorFreqs msg_;
};

class Init_MotorFreqs_right_hz
{
public:
  Init_MotorFreqs_right_hz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorFreqs_left_hz right_hz(::raspimouse_msgs::msg::MotorFreqs::_right_hz_type arg)
  {
    msg_.right_hz = std::move(arg);
    return Init_MotorFreqs_left_hz(msg_);
  }

private:
  ::raspimouse_msgs::msg::MotorFreqs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::msg::MotorFreqs>()
{
  return raspimouse_msgs::msg::builder::Init_MotorFreqs_right_hz();
}

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__MOTOR_FREQS__BUILDER_HPP_
