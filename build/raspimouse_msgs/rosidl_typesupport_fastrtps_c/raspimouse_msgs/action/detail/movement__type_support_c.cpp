// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raspimouse_msgs:action/Movement.idl
// generated code does not contain a copyright notice
#include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raspimouse_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raspimouse_msgs/action/detail/movement__struct.h"
#include "raspimouse_msgs/action/detail/movement__functions.h"
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


using _Movement_Goal__ros_msg_type = raspimouse_msgs__action__Movement_Goal;

static bool _Movement_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Movement_Goal__ros_msg_type * ros_message = static_cast<const _Movement_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_x
  {
    cdr << ros_message->linear_x;
  }

  // Field name: linear_y
  {
    cdr << ros_message->linear_y;
  }

  // Field name: linear_z
  {
    cdr << ros_message->linear_z;
  }

  // Field name: angular_x
  {
    cdr << ros_message->angular_x;
  }

  // Field name: angular_y
  {
    cdr << ros_message->angular_y;
  }

  // Field name: angular_z
  {
    cdr << ros_message->angular_z;
  }

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

static bool _Movement_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Movement_Goal__ros_msg_type * ros_message = static_cast<_Movement_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_x
  {
    cdr >> ros_message->linear_x;
  }

  // Field name: linear_y
  {
    cdr >> ros_message->linear_y;
  }

  // Field name: linear_z
  {
    cdr >> ros_message->linear_z;
  }

  // Field name: angular_x
  {
    cdr >> ros_message->angular_x;
  }

  // Field name: angular_y
  {
    cdr >> ros_message->angular_y;
  }

  // Field name: angular_z
  {
    cdr >> ros_message->angular_z;
  }

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
size_t get_serialized_size_raspimouse_msgs__action__Movement_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Movement_Goal__ros_msg_type * ros_message = static_cast<const _Movement_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name linear_x
  {
    size_t item_size = sizeof(ros_message->linear_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_y
  {
    size_t item_size = sizeof(ros_message->linear_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_z
  {
    size_t item_size = sizeof(ros_message->linear_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_x
  {
    size_t item_size = sizeof(ros_message->angular_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_y
  {
    size_t item_size = sizeof(ros_message->angular_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_z
  {
    size_t item_size = sizeof(ros_message->angular_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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

static uint32_t _Movement_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__action__Movement_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__action__Movement_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: linear_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: linear_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: linear_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angular_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angular_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angular_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
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

static size_t _Movement_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__action__Movement_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Movement_Goal = {
  "raspimouse_msgs::action",
  "Movement_Goal",
  _Movement_Goal__cdr_serialize,
  _Movement_Goal__cdr_deserialize,
  _Movement_Goal__get_serialized_size,
  _Movement_Goal__max_serialized_size
};

static rosidl_message_type_support_t _Movement_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Movement_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Goal)() {
  return &_Movement_Goal__type_support;
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
// #include "raspimouse_msgs/action/detail/movement__struct.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
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


using _Movement_Result__ros_msg_type = raspimouse_msgs__action__Movement_Result;

static bool _Movement_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Movement_Result__ros_msg_type * ros_message = static_cast<const _Movement_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: finished
  {
    cdr << (ros_message->finished ? true : false);
  }

  return true;
}

static bool _Movement_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Movement_Result__ros_msg_type * ros_message = static_cast<_Movement_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: finished
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->finished = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t get_serialized_size_raspimouse_msgs__action__Movement_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Movement_Result__ros_msg_type * ros_message = static_cast<const _Movement_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name finished
  {
    size_t item_size = sizeof(ros_message->finished);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Movement_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__action__Movement_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__action__Movement_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: finished
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Movement_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__action__Movement_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Movement_Result = {
  "raspimouse_msgs::action",
  "Movement_Result",
  _Movement_Result__cdr_serialize,
  _Movement_Result__cdr_deserialize,
  _Movement_Result__get_serialized_size,
  _Movement_Result__max_serialized_size
};

static rosidl_message_type_support_t _Movement_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Movement_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Result)() {
  return &_Movement_Result__type_support;
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
// #include "raspimouse_msgs/action/detail/movement__struct.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
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


using _Movement_Feedback__ros_msg_type = raspimouse_msgs__action__Movement_Feedback;

static bool _Movement_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Movement_Feedback__ros_msg_type * ros_message = static_cast<const _Movement_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: remaining_steps
  {
    cdr << ros_message->remaining_steps;
  }

  return true;
}

static bool _Movement_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Movement_Feedback__ros_msg_type * ros_message = static_cast<_Movement_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: remaining_steps
  {
    cdr >> ros_message->remaining_steps;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t get_serialized_size_raspimouse_msgs__action__Movement_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Movement_Feedback__ros_msg_type * ros_message = static_cast<const _Movement_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name remaining_steps
  {
    size_t item_size = sizeof(ros_message->remaining_steps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Movement_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__action__Movement_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__action__Movement_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: remaining_steps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Movement_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__action__Movement_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Movement_Feedback = {
  "raspimouse_msgs::action",
  "Movement_Feedback",
  _Movement_Feedback__cdr_serialize,
  _Movement_Feedback__cdr_deserialize,
  _Movement_Feedback__get_serialized_size,
  _Movement_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _Movement_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Movement_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Feedback)() {
  return &_Movement_Feedback__type_support;
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
// #include "raspimouse_msgs/action/detail/movement__struct.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
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

// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_raspimouse_msgs__action__Movement_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raspimouse_msgs__action__Movement_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _Movement_SendGoal_Request__ros_msg_type = raspimouse_msgs__action__Movement_SendGoal_Request;

static bool _Movement_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Movement_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _Movement_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Movement_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Movement_SendGoal_Request__ros_msg_type * ros_message = static_cast<_Movement_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t get_serialized_size_raspimouse_msgs__action__Movement_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Movement_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _Movement_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_raspimouse_msgs__action__Movement_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Movement_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__action__Movement_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__action__Movement_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raspimouse_msgs__action__Movement_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Movement_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__action__Movement_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Movement_SendGoal_Request = {
  "raspimouse_msgs::action",
  "Movement_SendGoal_Request",
  _Movement_SendGoal_Request__cdr_serialize,
  _Movement_SendGoal_Request__cdr_deserialize,
  _Movement_SendGoal_Request__get_serialized_size,
  _Movement_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _Movement_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Movement_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_SendGoal_Request)() {
  return &_Movement_SendGoal_Request__type_support;
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
// #include "raspimouse_msgs/action/detail/movement__struct.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _Movement_SendGoal_Response__ros_msg_type = raspimouse_msgs__action__Movement_SendGoal_Response;

static bool _Movement_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Movement_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _Movement_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Movement_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Movement_SendGoal_Response__ros_msg_type * ros_message = static_cast<_Movement_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t get_serialized_size_raspimouse_msgs__action__Movement_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Movement_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _Movement_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Movement_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__action__Movement_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__action__Movement_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Movement_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__action__Movement_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Movement_SendGoal_Response = {
  "raspimouse_msgs::action",
  "Movement_SendGoal_Response",
  _Movement_SendGoal_Response__cdr_serialize,
  _Movement_SendGoal_Response__cdr_deserialize,
  _Movement_SendGoal_Response__get_serialized_size,
  _Movement_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _Movement_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Movement_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_SendGoal_Response)() {
  return &_Movement_SendGoal_Response__type_support;
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
#include "raspimouse_msgs/action/movement.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Movement_SendGoal__callbacks = {
  "raspimouse_msgs::action",
  "Movement_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_SendGoal_Response)(),
};

static rosidl_service_type_support_t Movement_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Movement_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_SendGoal)() {
  return &Movement_SendGoal__handle;
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
// #include "raspimouse_msgs/action/detail/movement__struct.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _Movement_GetResult_Request__ros_msg_type = raspimouse_msgs__action__Movement_GetResult_Request;

static bool _Movement_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Movement_GetResult_Request__ros_msg_type * ros_message = static_cast<const _Movement_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Movement_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Movement_GetResult_Request__ros_msg_type * ros_message = static_cast<_Movement_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t get_serialized_size_raspimouse_msgs__action__Movement_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Movement_GetResult_Request__ros_msg_type * ros_message = static_cast<const _Movement_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Movement_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__action__Movement_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__action__Movement_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Movement_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__action__Movement_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Movement_GetResult_Request = {
  "raspimouse_msgs::action",
  "Movement_GetResult_Request",
  _Movement_GetResult_Request__cdr_serialize,
  _Movement_GetResult_Request__cdr_deserialize,
  _Movement_GetResult_Request__get_serialized_size,
  _Movement_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _Movement_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Movement_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_GetResult_Request)() {
  return &_Movement_GetResult_Request__type_support;
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
// #include "raspimouse_msgs/action/detail/movement__struct.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
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

// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_raspimouse_msgs__action__Movement_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raspimouse_msgs__action__Movement_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Result)();


using _Movement_GetResult_Response__ros_msg_type = raspimouse_msgs__action__Movement_GetResult_Response;

static bool _Movement_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Movement_GetResult_Response__ros_msg_type * ros_message = static_cast<const _Movement_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Movement_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Movement_GetResult_Response__ros_msg_type * ros_message = static_cast<_Movement_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t get_serialized_size_raspimouse_msgs__action__Movement_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Movement_GetResult_Response__ros_msg_type * ros_message = static_cast<const _Movement_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_raspimouse_msgs__action__Movement_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Movement_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__action__Movement_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__action__Movement_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raspimouse_msgs__action__Movement_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Movement_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__action__Movement_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Movement_GetResult_Response = {
  "raspimouse_msgs::action",
  "Movement_GetResult_Response",
  _Movement_GetResult_Response__cdr_serialize,
  _Movement_GetResult_Response__cdr_deserialize,
  _Movement_GetResult_Response__get_serialized_size,
  _Movement_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _Movement_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Movement_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_GetResult_Response)() {
  return &_Movement_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/action/movement.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Movement_GetResult__callbacks = {
  "raspimouse_msgs::action",
  "Movement_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_GetResult_Response)(),
};

static rosidl_service_type_support_t Movement_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Movement_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_GetResult)() {
  return &Movement_GetResult__handle;
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
// #include "raspimouse_msgs/action/detail/movement__struct.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
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

// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_raspimouse_msgs__action__Movement_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raspimouse_msgs__action__Movement_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raspimouse_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _Movement_FeedbackMessage__ros_msg_type = raspimouse_msgs__action__Movement_FeedbackMessage;

static bool _Movement_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Movement_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _Movement_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Movement_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Movement_FeedbackMessage__ros_msg_type * ros_message = static_cast<_Movement_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t get_serialized_size_raspimouse_msgs__action__Movement_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Movement_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _Movement_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_raspimouse_msgs__action__Movement_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Movement_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raspimouse_msgs__action__Movement_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raspimouse_msgs
size_t max_serialized_size_raspimouse_msgs__action__Movement_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raspimouse_msgs__action__Movement_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Movement_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raspimouse_msgs__action__Movement_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Movement_FeedbackMessage = {
  "raspimouse_msgs::action",
  "Movement_FeedbackMessage",
  _Movement_FeedbackMessage__cdr_serialize,
  _Movement_FeedbackMessage__cdr_deserialize,
  _Movement_FeedbackMessage__get_serialized_size,
  _Movement_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _Movement_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Movement_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raspimouse_msgs, action, Movement_FeedbackMessage)() {
  return &_Movement_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
