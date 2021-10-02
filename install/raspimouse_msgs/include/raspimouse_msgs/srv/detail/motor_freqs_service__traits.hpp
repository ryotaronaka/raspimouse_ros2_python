// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raspimouse_msgs:srv/MotorFreqsService.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__TRAITS_HPP_
#define RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__TRAITS_HPP_

#include "raspimouse_msgs/srv/detail/motor_freqs_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::srv::MotorFreqsService_Request>()
{
  return "raspimouse_msgs::srv::MotorFreqsService_Request";
}

template<>
inline const char * name<raspimouse_msgs::srv::MotorFreqsService_Request>()
{
  return "raspimouse_msgs/srv/MotorFreqsService_Request";
}

template<>
struct has_fixed_size<raspimouse_msgs::srv::MotorFreqsService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raspimouse_msgs::srv::MotorFreqsService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raspimouse_msgs::srv::MotorFreqsService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::srv::MotorFreqsService_Response>()
{
  return "raspimouse_msgs::srv::MotorFreqsService_Response";
}

template<>
inline const char * name<raspimouse_msgs::srv::MotorFreqsService_Response>()
{
  return "raspimouse_msgs/srv/MotorFreqsService_Response";
}

template<>
struct has_fixed_size<raspimouse_msgs::srv::MotorFreqsService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raspimouse_msgs::srv::MotorFreqsService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raspimouse_msgs::srv::MotorFreqsService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::srv::MotorFreqsService>()
{
  return "raspimouse_msgs::srv::MotorFreqsService";
}

template<>
inline const char * name<raspimouse_msgs::srv::MotorFreqsService>()
{
  return "raspimouse_msgs/srv/MotorFreqsService";
}

template<>
struct has_fixed_size<raspimouse_msgs::srv::MotorFreqsService>
  : std::integral_constant<
    bool,
    has_fixed_size<raspimouse_msgs::srv::MotorFreqsService_Request>::value &&
    has_fixed_size<raspimouse_msgs::srv::MotorFreqsService_Response>::value
  >
{
};

template<>
struct has_bounded_size<raspimouse_msgs::srv::MotorFreqsService>
  : std::integral_constant<
    bool,
    has_bounded_size<raspimouse_msgs::srv::MotorFreqsService_Request>::value &&
    has_bounded_size<raspimouse_msgs::srv::MotorFreqsService_Response>::value
  >
{
};

template<>
struct is_service<raspimouse_msgs::srv::MotorFreqsService>
  : std::true_type
{
};

template<>
struct is_service_request<raspimouse_msgs::srv::MotorFreqsService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<raspimouse_msgs::srv::MotorFreqsService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__TRAITS_HPP_
