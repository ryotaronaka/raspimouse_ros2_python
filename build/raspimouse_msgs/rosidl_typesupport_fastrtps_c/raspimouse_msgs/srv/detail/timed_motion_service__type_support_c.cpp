// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raspimouse_msgs:srv/TimedMotionService.idl
// generated code does not contain a copyright notice
#include "raspimouse_msgs/srv/detail/timed_motion_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raspimouse_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raspimouse_msgs/srv/detail/timed_motion_service__struct.h"
#include "raspimouse_msgs/srv/detail/timed_motion_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TimedMotionService_Request__ros_msg_type = raspimouse_msgs__srv__TimedMotionService_Request;

static bool _TimedMotionService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TimedMotionService_Request__ros_msg_type * ros_message = static_cast<const _TimedMotionService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: left_hz
  {
    cdr << ros_message->left_hz;
  }

  // Field name: right_hz
  {
    cdr << ros_message->right_hz;
  }

  // Field name: duration_ms
  {
    cdr << ros_message->duration_ms;
  }

  return true;
}

static bool _TimedMotionService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TimedMotionService_Request__ros_msg_type * ros_message = static_cast<_TimedMotionService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: left_hz
  {
    cdr >> ros_message->left_hz;
  }

  // Field name: right_hz
  {
    cdr >> ros_message->right_hz;
  }

  // Field name: duration_ms
  {
    cdr >> ros_message->duration_ms;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t get_serialized_size_raspimouse_msgs__srv__TimedMotionService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TimedMotionService_Request__ros_msg_type * ros_message = static_cast<const _TimedMotionService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_hz
  {
    size_t item_size = sizeof(ros_message->left_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hz
  {
    size_t item_size = sizeof(ros_message->right_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration_ms
  {
    size_t item_size = sizeof(ros_message->duration_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TimedMotionService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__srv__TimedMotionService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__srv__TimedMotionService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_hz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_hz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: duration_ms
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TimedMotionService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__srv__TimedMotionService_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TimedMotionService_Request = {
  "raspimouse_msgs::srv",
  "TimedMotionService_Request",
  _TimedMotionService_Request__cdr_serialize,
  _TimedMotionService_Request__cdr_deserialize,
  _TimedMotionService_Request__get_serialized_size,
  _TimedMotionService_Request__max_serialized_size
};

static rosidl_message_type_support_t _TimedMotionService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TimedMotionService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, srv, TimedMotionService_Request)() {
  return &_TimedMotionService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/srv/detail/timed_motion_service__struct.h"
// already included above
// #include "raspimouse_msgs/srv/detail/timed_motion_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TimedMotionService_Response__ros_msg_type = raspimouse_msgs__srv__TimedMotionService_Response;

static bool _TimedMotionService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TimedMotionService_Response__ros_msg_type * ros_message = static_cast<const _TimedMotionService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _TimedMotionService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TimedMotionService_Response__ros_msg_type * ros_message = static_cast<_TimedMotionService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t get_serialized_size_raspimouse_msgs__srv__TimedMotionService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TimedMotionService_Response__ros_msg_type * ros_message = static_cast<const _TimedMotionService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TimedMotionService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__srv__TimedMotionService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__srv__TimedMotionService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TimedMotionService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__srv__TimedMotionService_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TimedMotionService_Response = {
  "raspimouse_msgs::srv",
  "TimedMotionService_Response",
  _TimedMotionService_Response__cdr_serialize,
  _TimedMotionService_Response__cdr_deserialize,
  _TimedMotionService_Response__get_serialized_size,
  _TimedMotionService_Response__max_serialized_size
};

static rosidl_message_type_support_t _TimedMotionService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TimedMotionService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, srv, TimedMotionService_Response)() {
  return &_TimedMotionService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raspimouse_msgs/srv/timed_motion_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TimedMotionService__callbacks = {
  "raspimouse_msgs::srv",
  "TimedMotionService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, srv, TimedMotionService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, srv, TimedMotionService_Response)(),
};

static rosidl_service_type_support_t TimedMotionService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TimedMotionService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, srv, TimedMotionService)() {
  return &TimedMotionService__handle;
}

#if defined(__cplusplus)
}
#endif
