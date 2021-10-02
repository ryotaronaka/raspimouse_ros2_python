// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from light_sensor_values:msg/LightSensorValues.idl
// generated code does not contain a copyright notice

#ifndef LIGHT_SENSOR_VALUES__MSG__DETAIL__LIGHT_SENSOR_VALUES__BUILDER_HPP_
#define LIGHT_SENSOR_VALUES__MSG__DETAIL__LIGHT_SENSOR_VALUES__BUILDER_HPP_

#include "light_sensor_values/msg/detail/light_sensor_values__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace light_sensor_values
{

namespace msg
{

namespace builder
{

class Init_LightSensorValues_sum_forward
{
public:
  explicit Init_LightSensorValues_sum_forward(::light_sensor_values::msg::LightSensorValues & msg)
  : msg_(msg)
  {}
  ::light_sensor_values::msg::LightSensorValues sum_forward(::light_sensor_values::msg::LightSensorValues::_sum_forward_type arg)
  {
    msg_.sum_forward = std::move(arg);
    return std::move(msg_);
  }

private:
  ::light_sensor_values::msg::LightSensorValues msg_;
};

class Init_LightSensorValues_sum_all
{
public:
  explicit Init_LightSensorValues_sum_all(::light_sensor_values::msg::LightSensorValues & msg)
  : msg_(msg)
  {}
  Init_LightSensorValues_sum_forward sum_all(::light_sensor_values::msg::LightSensorValues::_sum_all_type arg)
  {
    msg_.sum_all = std::move(arg);
    return Init_LightSensorValues_sum_forward(msg_);
  }

private:
  ::light_sensor_values::msg::LightSensorValues msg_;
};

class Init_LightSensorValues_left_forward
{
public:
  explicit Init_LightSensorValues_left_forward(::light_sensor_values::msg::LightSensorValues & msg)
  : msg_(msg)
  {}
  Init_LightSensorValues_sum_all left_forward(::light_sensor_values::msg::LightSensorValues::_left_forward_type arg)
  {
    msg_.left_forward = std::move(arg);
    return Init_LightSensorValues_sum_all(msg_);
  }

private:
  ::light_sensor_values::msg::LightSensorValues msg_;
};

class Init_LightSensorValues_left_side
{
public:
  explicit Init_LightSensorValues_left_side(::light_sensor_values::msg::LightSensorValues & msg)
  : msg_(msg)
  {}
  Init_LightSensorValues_left_forward left_side(::light_sensor_values::msg::LightSensorValues::_left_side_type arg)
  {
    msg_.left_side = std::move(arg);
    return Init_LightSensorValues_left_forward(msg_);
  }

private:
  ::light_sensor_values::msg::LightSensorValues msg_;
};

class Init_LightSensorValues_right_side
{
public:
  explicit Init_LightSensorValues_right_side(::light_sensor_values::msg::LightSensorValues & msg)
  : msg_(msg)
  {}
  Init_LightSensorValues_left_side right_side(::light_sensor_values::msg::LightSensorValues::_right_side_type arg)
  {
    msg_.right_side = std::move(arg);
    return Init_LightSensorValues_left_side(msg_);
  }

private:
  ::light_sensor_values::msg::LightSensorValues msg_;
};

class Init_LightSensorValues_right_forward
{
public:
  Init_LightSensorValues_right_forward()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightSensorValues_right_side right_forward(::light_sensor_values::msg::LightSensorValues::_right_forward_type arg)
  {
    msg_.right_forward = std::move(arg);
    return Init_LightSensorValues_right_side(msg_);
  }

private:
  ::light_sensor_values::msg::LightSensorValues msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::light_sensor_values::msg::LightSensorValues>()
{
  return light_sensor_values::msg::builder::Init_LightSensorValues_right_forward();
}

}  // namespace light_sensor_values

#endif  // LIGHT_SENSOR_VALUES__MSG__DETAIL__LIGHT_SENSOR_VALUES__BUILDER_HPP_
