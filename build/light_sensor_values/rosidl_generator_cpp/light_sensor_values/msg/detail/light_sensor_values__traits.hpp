// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from light_sensor_values:msg/LightSensorValues.idl
// generated code does not contain a copyright notice

#ifndef LIGHT_SENSOR_VALUES__MSG__DETAIL__LIGHT_SENSOR_VALUES__TRAITS_HPP_
#define LIGHT_SENSOR_VALUES__MSG__DETAIL__LIGHT_SENSOR_VALUES__TRAITS_HPP_

#include "light_sensor_values/msg/detail/light_sensor_values__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<light_sensor_values::msg::LightSensorValues>()
{
  return "light_sensor_values::msg::LightSensorValues";
}

template<>
inline const char * name<light_sensor_values::msg::LightSensorValues>()
{
  return "light_sensor_values/msg/LightSensorValues";
}

template<>
struct has_fixed_size<light_sensor_values::msg::LightSensorValues>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<light_sensor_values::msg::LightSensorValues>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<light_sensor_values::msg::LightSensorValues>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIGHT_SENSOR_VALUES__MSG__DETAIL__LIGHT_SENSOR_VALUES__TRAITS_HPP_
