// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raspimouse_msgs:msg/MotorFreqs.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__MOTOR_FREQS__TRAITS_HPP_
#define RASPIMOUSE_MSGS__MSG__DETAIL__MOTOR_FREQS__TRAITS_HPP_

#include "raspimouse_msgs/msg/detail/motor_freqs__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::msg::MotorFreqs>()
{
  return "raspimouse_msgs::msg::MotorFreqs";
}

template<>
inline const char * name<raspimouse_msgs::msg::MotorFreqs>()
{
  return "raspimouse_msgs/msg/MotorFreqs";
}

template<>
struct has_fixed_size<raspimouse_msgs::msg::MotorFreqs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raspimouse_msgs::msg::MotorFreqs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raspimouse_msgs::msg::MotorFreqs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__MOTOR_FREQS__TRAITS_HPP_
