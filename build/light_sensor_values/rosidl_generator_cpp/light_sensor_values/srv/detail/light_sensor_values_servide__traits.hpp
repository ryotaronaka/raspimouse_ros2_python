// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from light_sensor_values:srv/LightSensorValuesServide.idl
// generated code does not contain a copyright notice

#ifndef LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVIDE__TRAITS_HPP_
#define LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVIDE__TRAITS_HPP_

#include "light_sensor_values/srv/detail/light_sensor_values_servide__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<light_sensor_values::srv::LightSensorValuesServide_Request>()
{
  return "light_sensor_values::srv::LightSensorValuesServide_Request";
}

template<>
inline const char * name<light_sensor_values::srv::LightSensorValuesServide_Request>()
{
  return "light_sensor_values/srv/LightSensorValuesServide_Request";
}

template<>
struct has_fixed_size<light_sensor_values::srv::LightSensorValuesServide_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<light_sensor_values::srv::LightSensorValuesServide_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<light_sensor_values::srv::LightSensorValuesServide_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<light_sensor_values::srv::LightSensorValuesServide_Response>()
{
  return "light_sensor_values::srv::LightSensorValuesServide_Response";
}

template<>
inline const char * name<light_sensor_values::srv::LightSensorValuesServide_Response>()
{
  return "light_sensor_values/srv/LightSensorValuesServide_Response";
}

template<>
struct has_fixed_size<light_sensor_values::srv::LightSensorValuesServide_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<light_sensor_values::srv::LightSensorValuesServide_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<light_sensor_values::srv::LightSensorValuesServide_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<light_sensor_values::srv::LightSensorValuesServide>()
{
  return "light_sensor_values::srv::LightSensorValuesServide";
}

template<>
inline const char * name<light_sensor_values::srv::LightSensorValuesServide>()
{
  return "light_sensor_values/srv/LightSensorValuesServide";
}

template<>
struct has_fixed_size<light_sensor_values::srv::LightSensorValuesServide>
  : std::integral_constant<
    bool,
    has_fixed_size<light_sensor_values::srv::LightSensorValuesServide_Request>::value &&
    has_fixed_size<light_sensor_values::srv::LightSensorValuesServide_Response>::value
  >
{
};

template<>
struct has_bounded_size<light_sensor_values::srv::LightSensorValuesServide>
  : std::integral_constant<
    bool,
    has_bounded_size<light_sensor_values::srv::LightSensorValuesServide_Request>::value &&
    has_bounded_size<light_sensor_values::srv::LightSensorValuesServide_Response>::value
  >
{
};

template<>
struct is_service<light_sensor_values::srv::LightSensorValuesServide>
  : std::true_type
{
};

template<>
struct is_service_request<light_sensor_values::srv::LightSensorValuesServide_Request>
  : std::true_type
{
};

template<>
struct is_service_response<light_sensor_values::srv::LightSensorValuesServide_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVIDE__TRAITS_HPP_
