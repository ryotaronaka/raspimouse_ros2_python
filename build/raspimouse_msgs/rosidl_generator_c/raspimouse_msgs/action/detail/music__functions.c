// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raspimouse_msgs:action/Music.idl
// generated code does not contain a copyright notice
#include "raspimouse_msgs/action/detail/music__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `freqs`
// Member `durations`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
raspimouse_msgs__action__Music_Goal__init(raspimouse_msgs__action__Music_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // freqs
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->freqs, 0)) {
    raspimouse_msgs__action__Music_Goal__fini(msg);
    return false;
  }
  // durations
  if (!rosidl_runtime_c__float__Sequence__init(&msg->durations, 0)) {
    raspimouse_msgs__action__Music_Goal__fini(msg);
    return false;
  }
  return true;
}

void
raspimouse_msgs__action__Music_Goal__fini(raspimouse_msgs__action__Music_Goal * msg)
{
  if (!msg) {
    return;
  }
  // freqs
  rosidl_runtime_c__uint16__Sequence__fini(&msg->freqs);
  // durations
  rosidl_runtime_c__float__Sequence__fini(&msg->durations);
}

raspimouse_msgs__action__Music_Goal *
raspimouse_msgs__action__Music_Goal__create()
{
  raspimouse_msgs__action__Music_Goal * msg = (raspimouse_msgs__action__Music_Goal *)malloc(sizeof(raspimouse_msgs__action__Music_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__action__Music_Goal));
  bool success = raspimouse_msgs__action__Music_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__action__Music_Goal__destroy(raspimouse_msgs__action__Music_Goal * msg)
{
  if (msg) {
    raspimouse_msgs__action__Music_Goal__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__action__Music_Goal__Sequence__init(raspimouse_msgs__action__Music_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__action__Music_Goal * data = NULL;
  if (size) {
    data = (raspimouse_msgs__action__Music_Goal *)calloc(size, sizeof(raspimouse_msgs__action__Music_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__action__Music_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__action__Music_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
raspimouse_msgs__action__Music_Goal__Sequence__fini(raspimouse_msgs__action__Music_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__action__Music_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

raspimouse_msgs__action__Music_Goal__Sequence *
raspimouse_msgs__action__Music_Goal__Sequence__create(size_t size)
{
  raspimouse_msgs__action__Music_Goal__Sequence * array = (raspimouse_msgs__action__Music_Goal__Sequence *)malloc(sizeof(raspimouse_msgs__action__Music_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__action__Music_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__action__Music_Goal__Sequence__destroy(raspimouse_msgs__action__Music_Goal__Sequence * array)
{
  if (array) {
    raspimouse_msgs__action__Music_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
raspimouse_msgs__action__Music_Result__init(raspimouse_msgs__action__Music_Result * msg)
{
  if (!msg) {
    return false;
  }
  // finished
  return true;
}

void
raspimouse_msgs__action__Music_Result__fini(raspimouse_msgs__action__Music_Result * msg)
{
  if (!msg) {
    return;
  }
  // finished
}

raspimouse_msgs__action__Music_Result *
raspimouse_msgs__action__Music_Result__create()
{
  raspimouse_msgs__action__Music_Result * msg = (raspimouse_msgs__action__Music_Result *)malloc(sizeof(raspimouse_msgs__action__Music_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__action__Music_Result));
  bool success = raspimouse_msgs__action__Music_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__action__Music_Result__destroy(raspimouse_msgs__action__Music_Result * msg)
{
  if (msg) {
    raspimouse_msgs__action__Music_Result__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__action__Music_Result__Sequence__init(raspimouse_msgs__action__Music_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__action__Music_Result * data = NULL;
  if (size) {
    data = (raspimouse_msgs__action__Music_Result *)calloc(size, sizeof(raspimouse_msgs__action__Music_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__action__Music_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__action__Music_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
raspimouse_msgs__action__Music_Result__Sequence__fini(raspimouse_msgs__action__Music_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__action__Music_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

raspimouse_msgs__action__Music_Result__Sequence *
raspimouse_msgs__action__Music_Result__Sequence__create(size_t size)
{
  raspimouse_msgs__action__Music_Result__Sequence * array = (raspimouse_msgs__action__Music_Result__Sequence *)malloc(sizeof(raspimouse_msgs__action__Music_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__action__Music_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__action__Music_Result__Sequence__destroy(raspimouse_msgs__action__Music_Result__Sequence * array)
{
  if (array) {
    raspimouse_msgs__action__Music_Result__Sequence__fini(array);
  }
  free(array);
}


bool
raspimouse_msgs__action__Music_Feedback__init(raspimouse_msgs__action__Music_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remaining_steps
  return true;
}

void
raspimouse_msgs__action__Music_Feedback__fini(raspimouse_msgs__action__Music_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remaining_steps
}

raspimouse_msgs__action__Music_Feedback *
raspimouse_msgs__action__Music_Feedback__create()
{
  raspimouse_msgs__action__Music_Feedback * msg = (raspimouse_msgs__action__Music_Feedback *)malloc(sizeof(raspimouse_msgs__action__Music_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__action__Music_Feedback));
  bool success = raspimouse_msgs__action__Music_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__action__Music_Feedback__destroy(raspimouse_msgs__action__Music_Feedback * msg)
{
  if (msg) {
    raspimouse_msgs__action__Music_Feedback__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__action__Music_Feedback__Sequence__init(raspimouse_msgs__action__Music_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__action__Music_Feedback * data = NULL;
  if (size) {
    data = (raspimouse_msgs__action__Music_Feedback *)calloc(size, sizeof(raspimouse_msgs__action__Music_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__action__Music_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__action__Music_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
raspimouse_msgs__action__Music_Feedback__Sequence__fini(raspimouse_msgs__action__Music_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__action__Music_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

raspimouse_msgs__action__Music_Feedback__Sequence *
raspimouse_msgs__action__Music_Feedback__Sequence__create(size_t size)
{
  raspimouse_msgs__action__Music_Feedback__Sequence * array = (raspimouse_msgs__action__Music_Feedback__Sequence *)malloc(sizeof(raspimouse_msgs__action__Music_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__action__Music_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__action__Music_Feedback__Sequence__destroy(raspimouse_msgs__action__Music_Feedback__Sequence * array)
{
  if (array) {
    raspimouse_msgs__action__Music_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"

bool
raspimouse_msgs__action__Music_SendGoal_Request__init(raspimouse_msgs__action__Music_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    raspimouse_msgs__action__Music_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!raspimouse_msgs__action__Music_Goal__init(&msg->goal)) {
    raspimouse_msgs__action__Music_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
raspimouse_msgs__action__Music_SendGoal_Request__fini(raspimouse_msgs__action__Music_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  raspimouse_msgs__action__Music_Goal__fini(&msg->goal);
}

raspimouse_msgs__action__Music_SendGoal_Request *
raspimouse_msgs__action__Music_SendGoal_Request__create()
{
  raspimouse_msgs__action__Music_SendGoal_Request * msg = (raspimouse_msgs__action__Music_SendGoal_Request *)malloc(sizeof(raspimouse_msgs__action__Music_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__action__Music_SendGoal_Request));
  bool success = raspimouse_msgs__action__Music_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__action__Music_SendGoal_Request__destroy(raspimouse_msgs__action__Music_SendGoal_Request * msg)
{
  if (msg) {
    raspimouse_msgs__action__Music_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__action__Music_SendGoal_Request__Sequence__init(raspimouse_msgs__action__Music_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__action__Music_SendGoal_Request * data = NULL;
  if (size) {
    data = (raspimouse_msgs__action__Music_SendGoal_Request *)calloc(size, sizeof(raspimouse_msgs__action__Music_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__action__Music_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__action__Music_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
raspimouse_msgs__action__Music_SendGoal_Request__Sequence__fini(raspimouse_msgs__action__Music_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__action__Music_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

raspimouse_msgs__action__Music_SendGoal_Request__Sequence *
raspimouse_msgs__action__Music_SendGoal_Request__Sequence__create(size_t size)
{
  raspimouse_msgs__action__Music_SendGoal_Request__Sequence * array = (raspimouse_msgs__action__Music_SendGoal_Request__Sequence *)malloc(sizeof(raspimouse_msgs__action__Music_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__action__Music_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__action__Music_SendGoal_Request__Sequence__destroy(raspimouse_msgs__action__Music_SendGoal_Request__Sequence * array)
{
  if (array) {
    raspimouse_msgs__action__Music_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
raspimouse_msgs__action__Music_SendGoal_Response__init(raspimouse_msgs__action__Music_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    raspimouse_msgs__action__Music_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
raspimouse_msgs__action__Music_SendGoal_Response__fini(raspimouse_msgs__action__Music_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

raspimouse_msgs__action__Music_SendGoal_Response *
raspimouse_msgs__action__Music_SendGoal_Response__create()
{
  raspimouse_msgs__action__Music_SendGoal_Response * msg = (raspimouse_msgs__action__Music_SendGoal_Response *)malloc(sizeof(raspimouse_msgs__action__Music_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__action__Music_SendGoal_Response));
  bool success = raspimouse_msgs__action__Music_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__action__Music_SendGoal_Response__destroy(raspimouse_msgs__action__Music_SendGoal_Response * msg)
{
  if (msg) {
    raspimouse_msgs__action__Music_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__action__Music_SendGoal_Response__Sequence__init(raspimouse_msgs__action__Music_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__action__Music_SendGoal_Response * data = NULL;
  if (size) {
    data = (raspimouse_msgs__action__Music_SendGoal_Response *)calloc(size, sizeof(raspimouse_msgs__action__Music_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__action__Music_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__action__Music_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
raspimouse_msgs__action__Music_SendGoal_Response__Sequence__fini(raspimouse_msgs__action__Music_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__action__Music_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

raspimouse_msgs__action__Music_SendGoal_Response__Sequence *
raspimouse_msgs__action__Music_SendGoal_Response__Sequence__create(size_t size)
{
  raspimouse_msgs__action__Music_SendGoal_Response__Sequence * array = (raspimouse_msgs__action__Music_SendGoal_Response__Sequence *)malloc(sizeof(raspimouse_msgs__action__Music_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__action__Music_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__action__Music_SendGoal_Response__Sequence__destroy(raspimouse_msgs__action__Music_SendGoal_Response__Sequence * array)
{
  if (array) {
    raspimouse_msgs__action__Music_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
raspimouse_msgs__action__Music_GetResult_Request__init(raspimouse_msgs__action__Music_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    raspimouse_msgs__action__Music_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
raspimouse_msgs__action__Music_GetResult_Request__fini(raspimouse_msgs__action__Music_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

raspimouse_msgs__action__Music_GetResult_Request *
raspimouse_msgs__action__Music_GetResult_Request__create()
{
  raspimouse_msgs__action__Music_GetResult_Request * msg = (raspimouse_msgs__action__Music_GetResult_Request *)malloc(sizeof(raspimouse_msgs__action__Music_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__action__Music_GetResult_Request));
  bool success = raspimouse_msgs__action__Music_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__action__Music_GetResult_Request__destroy(raspimouse_msgs__action__Music_GetResult_Request * msg)
{
  if (msg) {
    raspimouse_msgs__action__Music_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__action__Music_GetResult_Request__Sequence__init(raspimouse_msgs__action__Music_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__action__Music_GetResult_Request * data = NULL;
  if (size) {
    data = (raspimouse_msgs__action__Music_GetResult_Request *)calloc(size, sizeof(raspimouse_msgs__action__Music_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__action__Music_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__action__Music_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
raspimouse_msgs__action__Music_GetResult_Request__Sequence__fini(raspimouse_msgs__action__Music_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__action__Music_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

raspimouse_msgs__action__Music_GetResult_Request__Sequence *
raspimouse_msgs__action__Music_GetResult_Request__Sequence__create(size_t size)
{
  raspimouse_msgs__action__Music_GetResult_Request__Sequence * array = (raspimouse_msgs__action__Music_GetResult_Request__Sequence *)malloc(sizeof(raspimouse_msgs__action__Music_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__action__Music_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__action__Music_GetResult_Request__Sequence__destroy(raspimouse_msgs__action__Music_GetResult_Request__Sequence * array)
{
  if (array) {
    raspimouse_msgs__action__Music_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"

bool
raspimouse_msgs__action__Music_GetResult_Response__init(raspimouse_msgs__action__Music_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!raspimouse_msgs__action__Music_Result__init(&msg->result)) {
    raspimouse_msgs__action__Music_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
raspimouse_msgs__action__Music_GetResult_Response__fini(raspimouse_msgs__action__Music_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  raspimouse_msgs__action__Music_Result__fini(&msg->result);
}

raspimouse_msgs__action__Music_GetResult_Response *
raspimouse_msgs__action__Music_GetResult_Response__create()
{
  raspimouse_msgs__action__Music_GetResult_Response * msg = (raspimouse_msgs__action__Music_GetResult_Response *)malloc(sizeof(raspimouse_msgs__action__Music_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__action__Music_GetResult_Response));
  bool success = raspimouse_msgs__action__Music_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__action__Music_GetResult_Response__destroy(raspimouse_msgs__action__Music_GetResult_Response * msg)
{
  if (msg) {
    raspimouse_msgs__action__Music_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__action__Music_GetResult_Response__Sequence__init(raspimouse_msgs__action__Music_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__action__Music_GetResult_Response * data = NULL;
  if (size) {
    data = (raspimouse_msgs__action__Music_GetResult_Response *)calloc(size, sizeof(raspimouse_msgs__action__Music_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__action__Music_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__action__Music_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
raspimouse_msgs__action__Music_GetResult_Response__Sequence__fini(raspimouse_msgs__action__Music_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__action__Music_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

raspimouse_msgs__action__Music_GetResult_Response__Sequence *
raspimouse_msgs__action__Music_GetResult_Response__Sequence__create(size_t size)
{
  raspimouse_msgs__action__Music_GetResult_Response__Sequence * array = (raspimouse_msgs__action__Music_GetResult_Response__Sequence *)malloc(sizeof(raspimouse_msgs__action__Music_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__action__Music_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__action__Music_GetResult_Response__Sequence__destroy(raspimouse_msgs__action__Music_GetResult_Response__Sequence * array)
{
  if (array) {
    raspimouse_msgs__action__Music_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"

bool
raspimouse_msgs__action__Music_FeedbackMessage__init(raspimouse_msgs__action__Music_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    raspimouse_msgs__action__Music_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!raspimouse_msgs__action__Music_Feedback__init(&msg->feedback)) {
    raspimouse_msgs__action__Music_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
raspimouse_msgs__action__Music_FeedbackMessage__fini(raspimouse_msgs__action__Music_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  raspimouse_msgs__action__Music_Feedback__fini(&msg->feedback);
}

raspimouse_msgs__action__Music_FeedbackMessage *
raspimouse_msgs__action__Music_FeedbackMessage__create()
{
  raspimouse_msgs__action__Music_FeedbackMessage * msg = (raspimouse_msgs__action__Music_FeedbackMessage *)malloc(sizeof(raspimouse_msgs__action__Music_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__action__Music_FeedbackMessage));
  bool success = raspimouse_msgs__action__Music_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__action__Music_FeedbackMessage__destroy(raspimouse_msgs__action__Music_FeedbackMessage * msg)
{
  if (msg) {
    raspimouse_msgs__action__Music_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__action__Music_FeedbackMessage__Sequence__init(raspimouse_msgs__action__Music_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__action__Music_FeedbackMessage * data = NULL;
  if (size) {
    data = (raspimouse_msgs__action__Music_FeedbackMessage *)calloc(size, sizeof(raspimouse_msgs__action__Music_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__action__Music_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__action__Music_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
raspimouse_msgs__action__Music_FeedbackMessage__Sequence__fini(raspimouse_msgs__action__Music_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__action__Music_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

raspimouse_msgs__action__Music_FeedbackMessage__Sequence *
raspimouse_msgs__action__Music_FeedbackMessage__Sequence__create(size_t size)
{
  raspimouse_msgs__action__Music_FeedbackMessage__Sequence * array = (raspimouse_msgs__action__Music_FeedbackMessage__Sequence *)malloc(sizeof(raspimouse_msgs__action__Music_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__action__Music_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__action__Music_FeedbackMessage__Sequence__destroy(raspimouse_msgs__action__Music_FeedbackMessage__Sequence * array)
{
  if (array) {
    raspimouse_msgs__action__Music_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
