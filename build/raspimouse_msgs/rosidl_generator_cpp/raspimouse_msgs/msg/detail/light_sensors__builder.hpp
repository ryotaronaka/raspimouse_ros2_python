// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspimouse_msgs:msg/LightSensors.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__BUILDER_HPP_
#define RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__BUILDER_HPP_

#include "raspimouse_msgs/msg/detail/light_sensors__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raspimouse_msgs
{

namespace msg
{

namespace builder
{

class Init_LightSensors_sum_forward
{
public:
  explicit Init_LightSensors_sum_forward(::raspimouse_msgs::msg::LightSensors & msg)
  : msg_(msg)
  {}
  ::raspimouse_msgs::msg::LightSensors sum_forward(::raspimouse_msgs::msg::LightSensors::_sum_forward_type arg)
  {
    msg_.sum_forward = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspimouse_msgs::msg::LightSensors msg_;
};

class Init_LightSensors_sum_all
{
public:
  explicit Init_LightSensors_sum_all(::raspimouse_msgs::msg::LightSensors & msg)
  : msg_(msg)
  {}
  Init_LightSensors_sum_forward sum_all(::raspimouse_msgs::msg::LightSensors::_sum_all_type arg)
  {
    msg_.sum_all = std::move(arg);
    return Init_LightSensors_sum_forward(msg_);
  }

private:
  ::raspimouse_msgs::msg::LightSensors msg_;
};

class Init_LightSensors_left_forward
{
public:
  explicit Init_LightSensors_left_forward(::raspimouse_msgs::msg::LightSensors & msg)
  : msg_(msg)
  {}
  Init_LightSensors_sum_all left_forward(::raspimouse_msgs::msg::LightSensors::_left_forward_type arg)
  {
    msg_.left_forward = std::move(arg);
    return Init_LightSensors_sum_all(msg_);
  }

private:
  ::raspimouse_msgs::msg::LightSensors msg_;
};

class Init_LightSensors_left_side
{
public:
  explicit Init_LightSensors_left_side(::raspimouse_msgs::msg::LightSensors & msg)
  : msg_(msg)
  {}
  Init_LightSensors_left_forward left_side(::raspimouse_msgs::msg::LightSensors::_left_side_type arg)
  {
    msg_.left_side = std::move(arg);
    return Init_LightSensors_left_forward(msg_);
  }

private:
  ::raspimouse_msgs::msg::LightSensors msg_;
};

class Init_LightSensors_right_side
{
public:
  explicit Init_LightSensors_right_side(::raspimouse_msgs::msg::LightSensors & msg)
  : msg_(msg)
  {}
  Init_LightSensors_left_side right_side(::raspimouse_msgs::msg::LightSensors::_right_side_type arg)
  {
    msg_.right_side = std::move(arg);
    return Init_LightSensors_left_side(msg_);
  }

private:
  ::raspimouse_msgs::msg::LightSensors msg_;
};

class Init_LightSensors_right_forward
{
public:
  Init_LightSensors_right_forward()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightSensors_right_side right_forward(::raspimouse_msgs::msg::LightSensors::_right_forward_type arg)
  {
    msg_.right_forward = std::move(arg);
    return Init_LightSensors_right_side(msg_);
  }

private:
  ::raspimouse_msgs::msg::LightSensors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspimouse_msgs::msg::LightSensors>()
{
  return raspimouse_msgs::msg::builder::Init_LightSensors_right_forward();
}

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__BUILDER_HPP_
