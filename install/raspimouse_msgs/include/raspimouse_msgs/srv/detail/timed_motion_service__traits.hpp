// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raspimouse_msgs:srv/TimedMotionService.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__TIMED_MOTION_SERVICE__TRAITS_HPP_
#define RASPIMOUSE_MSGS__SRV__DETAIL__TIMED_MOTION_SERVICE__TRAITS_HPP_

#include "raspimouse_msgs/srv/detail/timed_motion_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::srv::TimedMotionService_Request>()
{
  return "raspimouse_msgs::srv::TimedMotionService_Request";
}

template<>
inline const char * name<raspimouse_msgs::srv::TimedMotionService_Request>()
{
  return "raspimouse_msgs/srv/TimedMotionService_Request";
}

template<>
struct has_fixed_size<raspimouse_msgs::srv::TimedMotionService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raspimouse_msgs::srv::TimedMotionService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raspimouse_msgs::srv::TimedMotionService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::srv::TimedMotionService_Response>()
{
  return "raspimouse_msgs::srv::TimedMotionService_Response";
}

template<>
inline const char * name<raspimouse_msgs::srv::TimedMotionService_Response>()
{
  return "raspimouse_msgs/srv/TimedMotionService_Response";
}

template<>
struct has_fixed_size<raspimouse_msgs::srv::TimedMotionService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raspimouse_msgs::srv::TimedMotionService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raspimouse_msgs::srv::TimedMotionService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::srv::TimedMotionService>()
{
  return "raspimouse_msgs::srv::TimedMotionService";
}

template<>
inline const char * name<raspimouse_msgs::srv::TimedMotionService>()
{
  return "raspimouse_msgs/srv/TimedMotionService";
}

template<>
struct has_fixed_size<raspimouse_msgs::srv::TimedMotionService>
  : std::integral_constant<
    bool,
    has_fixed_size<raspimouse_msgs::srv::TimedMotionService_Request>::value &&
    has_fixed_size<raspimouse_msgs::srv::TimedMotionService_Response>::value
  >
{
};

template<>
struct has_bounded_size<raspimouse_msgs::srv::TimedMotionService>
  : std::integral_constant<
    bool,
    has_bounded_size<raspimouse_msgs::srv::TimedMotionService_Request>::value &&
    has_bounded_size<raspimouse_msgs::srv::TimedMotionService_Response>::value
  >
{
};

template<>
struct is_service<raspimouse_msgs::srv::TimedMotionService>
  : std::true_type
{
};

template<>
struct is_service_request<raspimouse_msgs::srv::TimedMotionService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<raspimouse_msgs::srv::TimedMotionService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__TIMED_MOTION_SERVICE__TRAITS_HPP_
