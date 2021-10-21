// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raspimouse_msgs:action/MoveRobot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
#include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raspimouse_msgs/action/detail/move_robot__functions.h"
#include "raspimouse_msgs/action/detail/move_robot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__MoveRobot_Goal__init(message_memory);
}

void MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_fini_function(void * message_memory)
{
  raspimouse_msgs__action__MoveRobot_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_Goal, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_Goal, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_Goal, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "MoveRobot_Goal",  // message name
  3,  // number of fields
  sizeof(raspimouse_msgs__action__MoveRobot_Goal),
  MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_message_member_array,  // message members
  MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_message_type_support_handle = {
  0,
  &MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_Goal)() {
  if (!MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_message_type_support_handle.typesupport_identifier) {
    MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveRobot_Goal__rosidl_typesupport_introspection_c__MoveRobot_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__MoveRobot_Result__init(message_memory);
}

void MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_fini_function(void * message_memory)
{
  raspimouse_msgs__action__MoveRobot_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_message_member_array[1] = {
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "MoveRobot_Result",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__action__MoveRobot_Result),
  MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_message_member_array,  // message members
  MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_message_type_support_handle = {
  0,
  &MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_Result)() {
  if (!MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_message_type_support_handle.typesupport_identifier) {
    MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveRobot_Result__rosidl_typesupport_introspection_c__MoveRobot_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__MoveRobot_Feedback__init(message_memory);
}

void MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_fini_function(void * message_memory)
{
  raspimouse_msgs__action__MoveRobot_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_Feedback, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_Feedback, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_Feedback, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "MoveRobot_Feedback",  // message name
  3,  // number of fields
  sizeof(raspimouse_msgs__action__MoveRobot_Feedback),
  MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_message_member_array,  // message members
  MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_message_type_support_handle = {
  0,
  &MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_Feedback)() {
  if (!MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_message_type_support_handle.typesupport_identifier) {
    MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveRobot_Feedback__rosidl_typesupport_introspection_c__MoveRobot_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "raspimouse_msgs/action/move_robot.h"
// Member `goal`
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__MoveRobot_SendGoal_Request__init(message_memory);
}

void MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_fini_function(void * message_memory)
{
  raspimouse_msgs__action__MoveRobot_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "MoveRobot_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__MoveRobot_SendGoal_Request),
  MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_member_array,  // message members
  MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_type_support_handle = {
  0,
  &MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_SendGoal_Request)() {
  MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_Goal)();
  if (!MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveRobot_SendGoal_Request__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__MoveRobot_SendGoal_Response__init(message_memory);
}

void MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_fini_function(void * message_memory)
{
  raspimouse_msgs__action__MoveRobot_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "MoveRobot_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__MoveRobot_SendGoal_Response),
  MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_member_array,  // message members
  MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_type_support_handle = {
  0,
  &MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_SendGoal_Response)() {
  MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveRobot_SendGoal_Response__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_service_members = {
  "raspimouse_msgs__action",  // service namespace
  "MoveRobot_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_service_type_support_handle = {
  0,
  &raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_SendGoal)() {
  if (!raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_service_type_support_handle.typesupport_identifier) {
    raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_SendGoal_Response)()->data;
  }

  return &raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__MoveRobot_GetResult_Request__init(message_memory);
}

void MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_fini_function(void * message_memory)
{
  raspimouse_msgs__action__MoveRobot_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "MoveRobot_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__action__MoveRobot_GetResult_Request),
  MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_member_array,  // message members
  MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_type_support_handle = {
  0,
  &MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_GetResult_Request)() {
  MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveRobot_GetResult_Request__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "raspimouse_msgs/action/move_robot.h"
// Member `result`
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__MoveRobot_GetResult_Response__init(message_memory);
}

void MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_fini_function(void * message_memory)
{
  raspimouse_msgs__action__MoveRobot_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "MoveRobot_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__MoveRobot_GetResult_Response),
  MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_member_array,  // message members
  MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_type_support_handle = {
  0,
  &MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_GetResult_Response)() {
  MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_Result)();
  if (!MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveRobot_GetResult_Response__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_GetResult_service_members = {
  "raspimouse_msgs__action",  // service namespace
  "MoveRobot_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_GetResult_service_type_support_handle = {
  0,
  &raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_GetResult)() {
  if (!raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_GetResult_service_type_support_handle.typesupport_identifier) {
    raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_GetResult_Response)()->data;
  }

  return &raspimouse_msgs__action__detail__move_robot__rosidl_typesupport_introspection_c__MoveRobot_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "raspimouse_msgs/action/move_robot.h"
// Member `feedback`
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__MoveRobot_FeedbackMessage__init(message_memory);
}

void MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_fini_function(void * message_memory)
{
  raspimouse_msgs__action__MoveRobot_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__MoveRobot_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "MoveRobot_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__MoveRobot_FeedbackMessage),
  MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_member_array,  // message members
  MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_type_support_handle = {
  0,
  &MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_FeedbackMessage)() {
  MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, MoveRobot_Feedback)();
  if (!MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveRobot_FeedbackMessage__rosidl_typesupport_introspection_c__MoveRobot_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
