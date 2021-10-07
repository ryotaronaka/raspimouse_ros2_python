// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raspimouse_msgs:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__ACTION__DETAIL__MOVEMENT__TRAITS_HPP_
#define RASPIMOUSE_MSGS__ACTION__DETAIL__MOVEMENT__TRAITS_HPP_

#include "raspimouse_msgs/action/detail/movement__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_Goal>()
{
  return "raspimouse_msgs::action::Movement_Goal";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_Goal>()
{
  return "raspimouse_msgs/action/Movement_Goal";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raspimouse_msgs::action::Movement_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_Result>()
{
  return "raspimouse_msgs::action::Movement_Result";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_Result>()
{
  return "raspimouse_msgs/action/Movement_Result";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raspimouse_msgs::action::Movement_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_Feedback>()
{
  return "raspimouse_msgs::action::Movement_Feedback";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_Feedback>()
{
  return "raspimouse_msgs/action/Movement_Feedback";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raspimouse_msgs::action::Movement_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "raspimouse_msgs/action/detail/movement__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_SendGoal_Request>()
{
  return "raspimouse_msgs::action::Movement_SendGoal_Request";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_SendGoal_Request>()
{
  return "raspimouse_msgs/action/Movement_SendGoal_Request";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<raspimouse_msgs::action::Movement_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<raspimouse_msgs::action::Movement_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<raspimouse_msgs::action::Movement_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_SendGoal_Response>()
{
  return "raspimouse_msgs::action::Movement_SendGoal_Response";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_SendGoal_Response>()
{
  return "raspimouse_msgs/action/Movement_SendGoal_Response";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<raspimouse_msgs::action::Movement_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_SendGoal>()
{
  return "raspimouse_msgs::action::Movement_SendGoal";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_SendGoal>()
{
  return "raspimouse_msgs/action/Movement_SendGoal";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<raspimouse_msgs::action::Movement_SendGoal_Request>::value &&
    has_fixed_size<raspimouse_msgs::action::Movement_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<raspimouse_msgs::action::Movement_SendGoal_Request>::value &&
    has_bounded_size<raspimouse_msgs::action::Movement_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<raspimouse_msgs::action::Movement_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<raspimouse_msgs::action::Movement_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<raspimouse_msgs::action::Movement_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_GetResult_Request>()
{
  return "raspimouse_msgs::action::Movement_GetResult_Request";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_GetResult_Request>()
{
  return "raspimouse_msgs/action/Movement_GetResult_Request";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<raspimouse_msgs::action::Movement_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "raspimouse_msgs/action/detail/movement__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_GetResult_Response>()
{
  return "raspimouse_msgs::action::Movement_GetResult_Response";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_GetResult_Response>()
{
  return "raspimouse_msgs/action/Movement_GetResult_Response";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<raspimouse_msgs::action::Movement_Result>::value> {};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<raspimouse_msgs::action::Movement_Result>::value> {};

template<>
struct is_message<raspimouse_msgs::action::Movement_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_GetResult>()
{
  return "raspimouse_msgs::action::Movement_GetResult";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_GetResult>()
{
  return "raspimouse_msgs/action/Movement_GetResult";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<raspimouse_msgs::action::Movement_GetResult_Request>::value &&
    has_fixed_size<raspimouse_msgs::action::Movement_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<raspimouse_msgs::action::Movement_GetResult_Request>::value &&
    has_bounded_size<raspimouse_msgs::action::Movement_GetResult_Response>::value
  >
{
};

template<>
struct is_service<raspimouse_msgs::action::Movement_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<raspimouse_msgs::action::Movement_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<raspimouse_msgs::action::Movement_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "raspimouse_msgs/action/detail/movement__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<raspimouse_msgs::action::Movement_FeedbackMessage>()
{
  return "raspimouse_msgs::action::Movement_FeedbackMessage";
}

template<>
inline const char * name<raspimouse_msgs::action::Movement_FeedbackMessage>()
{
  return "raspimouse_msgs/action/Movement_FeedbackMessage";
}

template<>
struct has_fixed_size<raspimouse_msgs::action::Movement_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<raspimouse_msgs::action::Movement_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<raspimouse_msgs::action::Movement_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<raspimouse_msgs::action::Movement_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<raspimouse_msgs::action::Movement_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<raspimouse_msgs::action::Movement>
  : std::true_type
{
};

template<>
struct is_action_goal<raspimouse_msgs::action::Movement_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<raspimouse_msgs::action::Movement_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<raspimouse_msgs::action::Movement_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // RASPIMOUSE_MSGS__ACTION__DETAIL__MOVEMENT__TRAITS_HPP_
