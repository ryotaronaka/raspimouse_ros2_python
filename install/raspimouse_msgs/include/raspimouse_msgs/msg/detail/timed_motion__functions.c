// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raspimouse_msgs:msg/TimedMotion.idl
// generated code does not contain a copyright notice
#include "raspimouse_msgs/msg/detail/timed_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
raspimouse_msgs__msg__TimedMotion__init(raspimouse_msgs__msg__TimedMotion * msg)
{
  if (!msg) {
    return false;
  }
  // left_hz
  // right_hz
  // duration_ms
  return true;
}

void
raspimouse_msgs__msg__TimedMotion__fini(raspimouse_msgs__msg__TimedMotion * msg)
{
  if (!msg) {
    return;
  }
  // left_hz
  // right_hz
  // duration_ms
}

raspimouse_msgs__msg__TimedMotion *
raspimouse_msgs__msg__TimedMotion__create()
{
  raspimouse_msgs__msg__TimedMotion * msg = (raspimouse_msgs__msg__TimedMotion *)malloc(sizeof(raspimouse_msgs__msg__TimedMotion));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__msg__TimedMotion));
  bool success = raspimouse_msgs__msg__TimedMotion__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__msg__TimedMotion__destroy(raspimouse_msgs__msg__TimedMotion * msg)
{
  if (msg) {
    raspimouse_msgs__msg__TimedMotion__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__msg__TimedMotion__Sequence__init(raspimouse_msgs__msg__TimedMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__msg__TimedMotion * data = NULL;
  if (size) {
    data = (raspimouse_msgs__msg__TimedMotion *)calloc(size, sizeof(raspimouse_msgs__msg__TimedMotion));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__msg__TimedMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__msg__TimedMotion__fini(&data[i - 1]);
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
raspimouse_msgs__msg__TimedMotion__Sequence__fini(raspimouse_msgs__msg__TimedMotion__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__msg__TimedMotion__fini(&array->data[i]);
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

raspimouse_msgs__msg__TimedMotion__Sequence *
raspimouse_msgs__msg__TimedMotion__Sequence__create(size_t size)
{
  raspimouse_msgs__msg__TimedMotion__Sequence * array = (raspimouse_msgs__msg__TimedMotion__Sequence *)malloc(sizeof(raspimouse_msgs__msg__TimedMotion__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__msg__TimedMotion__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__msg__TimedMotion__Sequence__destroy(raspimouse_msgs__msg__TimedMotion__Sequence * array)
{
  if (array) {
    raspimouse_msgs__msg__TimedMotion__Sequence__fini(array);
  }
  free(array);
}
