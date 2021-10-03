// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raspimouse_msgs:action/Music.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__ACTION__DETAIL__MUSIC__STRUCT_H_
#define RASPIMOUSE_MSGS__ACTION__DETAIL__MUSIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'freqs'
// Member 'durations'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Music in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__Music_Goal
{
  rosidl_runtime_c__uint16__Sequence freqs;
  rosidl_runtime_c__float__Sequence durations;
} raspimouse_msgs__action__Music_Goal;

// Struct for a sequence of raspimouse_msgs__action__Music_Goal.
typedef struct raspimouse_msgs__action__Music_Goal__Sequence
{
  raspimouse_msgs__action__Music_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__Music_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Music in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__Music_Result
{
  bool finished;
} raspimouse_msgs__action__Music_Result;

// Struct for a sequence of raspimouse_msgs__action__Music_Result.
typedef struct raspimouse_msgs__action__Music_Result__Sequence
{
  raspimouse_msgs__action__Music_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__Music_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Music in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__Music_Feedback
{
  uint32_t remaining_steps;
} raspimouse_msgs__action__Music_Feedback;

// Struct for a sequence of raspimouse_msgs__action__Music_Feedback.
typedef struct raspimouse_msgs__action__Music_Feedback__Sequence
{
  raspimouse_msgs__action__Music_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__Music_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "raspimouse_msgs/action/detail/music__struct.h"

// Struct defined in action/Music in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__Music_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  raspimouse_msgs__action__Music_Goal goal;
} raspimouse_msgs__action__Music_SendGoal_Request;

// Struct for a sequence of raspimouse_msgs__action__Music_SendGoal_Request.
typedef struct raspimouse_msgs__action__Music_SendGoal_Request__Sequence
{
  raspimouse_msgs__action__Music_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__Music_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Music in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__Music_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} raspimouse_msgs__action__Music_SendGoal_Response;

// Struct for a sequence of raspimouse_msgs__action__Music_SendGoal_Response.
typedef struct raspimouse_msgs__action__Music_SendGoal_Response__Sequence
{
  raspimouse_msgs__action__Music_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__Music_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Music in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__Music_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} raspimouse_msgs__action__Music_GetResult_Request;

// Struct for a sequence of raspimouse_msgs__action__Music_GetResult_Request.
typedef struct raspimouse_msgs__action__Music_GetResult_Request__Sequence
{
  raspimouse_msgs__action__Music_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__Music_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "raspimouse_msgs/action/detail/music__struct.h"

// Struct defined in action/Music in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__Music_GetResult_Response
{
  int8_t status;
  raspimouse_msgs__action__Music_Result result;
} raspimouse_msgs__action__Music_GetResult_Response;

// Struct for a sequence of raspimouse_msgs__action__Music_GetResult_Response.
typedef struct raspimouse_msgs__action__Music_GetResult_Response__Sequence
{
  raspimouse_msgs__action__Music_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__Music_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "raspimouse_msgs/action/detail/music__struct.h"

// Struct defined in action/Music in the package raspimouse_msgs.
typedef struct raspimouse_msgs__action__Music_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  raspimouse_msgs__action__Music_Feedback feedback;
} raspimouse_msgs__action__Music_FeedbackMessage;

// Struct for a sequence of raspimouse_msgs__action__Music_FeedbackMessage.
typedef struct raspimouse_msgs__action__Music_FeedbackMessage__Sequence
{
  raspimouse_msgs__action__Music_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__action__Music_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__ACTION__DETAIL__MUSIC__STRUCT_H_
