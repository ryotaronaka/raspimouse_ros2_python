// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raspimouse_msgs:action/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__ACTION__DETAIL__MOVE_ROBOT__STRUCT_H_
#define RASPIMOUSE_MSGS__ACTION__DETAIL__MOVE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/MoveRobot in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__MoveRobot_Goal
{
  double x;
  double y;
  double z;
} raspimouse_msgs__action__MoveRobot_Goal;

// Struct for a sequence of raspimouse_msgs__action__MoveRobot_Goal.
typedef struct raspimouse_msgs__action__MoveRobot_Goal__Sequence
{
  raspimouse_msgs__action__MoveRobot_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__MoveRobot_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/MoveRobot in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__MoveRobot_Result
{
  rosidl_runtime_c__String message;
} raspimouse_msgs__action__MoveRobot_Result;

// Struct for a sequence of raspimouse_msgs__action__MoveRobot_Result.
typedef struct raspimouse_msgs__action__MoveRobot_Result__Sequence
{
  raspimouse_msgs__action__MoveRobot_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__MoveRobot_Result__Sequence;


// Constants defined in the message

// Struct defined in action/MoveRobot in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__MoveRobot_Feedback
{
  double x;
  double y;
  double z;
} raspimouse_msgs__action__MoveRobot_Feedback;

// Struct for a sequence of raspimouse_msgs__action__MoveRobot_Feedback.
typedef struct raspimouse_msgs__action__MoveRobot_Feedback__Sequence
{
  raspimouse_msgs__action__MoveRobot_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__MoveRobot_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "raspimouse_msgs/action/detail/move_robot__struct.h"

// Struct defined in action/MoveRobot in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__MoveRobot_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  raspimouse_msgs__action__MoveRobot_Goal goal;
} raspimouse_msgs__action__MoveRobot_SendGoal_Request;

// Struct for a sequence of raspimouse_msgs__action__MoveRobot_SendGoal_Request.
typedef struct raspimouse_msgs__action__MoveRobot_SendGoal_Request__Sequence
{
  raspimouse_msgs__action__MoveRobot_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__MoveRobot_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveRobot in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__MoveRobot_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} raspimouse_msgs__action__MoveRobot_SendGoal_Response;

// Struct for a sequence of raspimouse_msgs__action__MoveRobot_SendGoal_Response.
typedef struct raspimouse_msgs__action__MoveRobot_SendGoal_Response__Sequence
{
  raspimouse_msgs__action__MoveRobot_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__MoveRobot_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveRobot in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__MoveRobot_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} raspimouse_msgs__action__MoveRobot_GetResult_Request;

// Struct for a sequence of raspimouse_msgs__action__MoveRobot_GetResult_Request.
typedef struct raspimouse_msgs__action__MoveRobot_GetResult_Request__Sequence
{
  raspimouse_msgs__action__MoveRobot_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__MoveRobot_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__struct.h"

// Struct defined in action/MoveRobot in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__MoveRobot_GetResult_Response
{
  int8_t status;
  raspimouse_msgs__action__MoveRobot_Result result;
} raspimouse_msgs__action__MoveRobot_GetResult_Response;

// Struct for a sequence of raspimouse_msgs__action__MoveRobot_GetResult_Response.
typedef struct raspimouse_msgs__action__MoveRobot_GetResult_Response__Sequence
{
  raspimouse_msgs__action__MoveRobot_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__MoveRobot_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "raspimouse_msgs/action/detail/move_robot__struct.h"

// Struct defined in action/MoveRobot in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__MoveRobot_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  raspimouse_msgs__action__MoveRobot_Feedback feedback;
} raspimouse_msgs__action__MoveRobot_FeedbackMessage;

// Struct for a sequence of raspimouse_msgs__action__MoveRobot_FeedbackMessage.
typedef struct raspimouse_msgs__action__MoveRobot_FeedbackMessage__Sequence
{
  raspimouse_msgs__action__MoveRobot_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__MoveRobot_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__ACTION__DETAIL__MOVE_ROBOT__STRUCT_H_
