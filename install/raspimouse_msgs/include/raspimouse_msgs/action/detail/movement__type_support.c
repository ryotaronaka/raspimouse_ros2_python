// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raspimouse_msgs:action/Movement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
#include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raspimouse_msgs/action/detail/movement__functions.h"
#include "raspimouse_msgs/action/detail/movement__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Movement_Goal__init(message_memory);
}

void Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Movement_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_member_array[9] = {
  {
    "linear_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Goal, linear_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Goal, linear_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Goal, linear_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Goal, angular_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Goal, angular_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Goal, angular_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Goal, left_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Goal, right_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Goal, duration_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Movement_Goal",  // message name
  9,  // number of fields
  sizeof(raspimouse_msgs__action__Movement_Goal),
  Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_member_array,  // message members
  Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_type_support_handle = {
  0,
  &Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_Goal)() {
  if (!Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_type_support_handle.typesupport_identifier) {
    Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Movement_Result__init(message_memory);
}

void Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Movement_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_member_array[1] = {
  {
    "finished",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Result, finished),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Movement_Result",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__action__Movement_Result),
  Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_member_array,  // message members
  Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_type_support_handle = {
  0,
  &Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_Result)() {
  if (!Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_type_support_handle.typesupport_identifier) {
    Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Movement_Feedback__init(message_memory);
}

void Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Movement_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_member_array[1] = {
  {
    "remaining_steps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_Feedback, remaining_steps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Movement_Feedback",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__action__Movement_Feedback),
  Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_member_array,  // message members
  Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_type_support_handle = {
  0,
  &Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_Feedback)() {
  if (!Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_type_support_handle.typesupport_identifier) {
    Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "raspimouse_msgs/action/movement.h"
// Member `goal`
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Movement_SendGoal_Request__init(message_memory);
}

void Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Movement_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__action__Movement_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Movement_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__Movement_SendGoal_Request),
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_member_array,  // message members
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle = {
  0,
  &Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_SendGoal_Request)() {
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_Goal)();
  if (!Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Movement_SendGoal_Response__init(message_memory);
}

void Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Movement_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__action__Movement_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Movement_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__Movement_SendGoal_Response),
  Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_member_array,  // message members
  Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle = {
  0,
  &Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_SendGoal_Response)() {
  Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_members = {
  "raspimouse_msgs__action",  // service namespace
  "Movement_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle = {
  0,
  &raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_SendGoal)() {
  if (!raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle.typesupport_identifier) {
    raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_SendGoal_Response)()->data;
  }

  return &raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__struct.h"


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

void Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Movement_GetResult_Request__init(message_memory);
}

void Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Movement_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Movement_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__action__Movement_GetResult_Request),
  Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_member_array,  // message members
  Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle = {
  0,
  &Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_GetResult_Request)() {
  Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "raspimouse_msgs/action/movement.h"
// Member `result`
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Movement_GetResult_Response__init(message_memory);
}

void Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Movement_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__action__Movement_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Movement_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__Movement_GetResult_Response),
  Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_member_array,  // message members
  Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle = {
  0,
  &Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_GetResult_Response)() {
  Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_Result)();
  if (!Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_members = {
  "raspimouse_msgs__action",  // service namespace
  "Movement_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle = {
  0,
  &raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_GetResult)() {
  if (!raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle.typesupport_identifier) {
    raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_GetResult_Response)()->data;
  }

  return &raspimouse_msgs__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/movement__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "raspimouse_msgs/action/movement.h"
// Member `feedback`
// already included above
// #include "raspimouse_msgs/action/detail/movement__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Movement_FeedbackMessage__init(message_memory);
}

void Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Movement_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Movement_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__action__Movement_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Movement_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__Movement_FeedbackMessage),
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_member_array,  // message members
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_type_support_handle = {
  0,
  &Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_FeedbackMessage)() {
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Movement_Feedback)();
  if (!Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
