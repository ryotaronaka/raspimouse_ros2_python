// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raspimouse_msgs:srv/LightSensorsService.idl
// generated code does not contain a copyright notice
#include "raspimouse_msgs/srv/detail/light_sensors_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
raspimouse_msgs__srv__LightSensorsService_Request__init(raspimouse_msgs__srv__LightSensorsService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  // d
  return true;
}

void
raspimouse_msgs__srv__LightSensorsService_Request__fini(raspimouse_msgs__srv__LightSensorsService_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
  // d
}

raspimouse_msgs__srv__LightSensorsService_Request *
raspimouse_msgs__srv__LightSensorsService_Request__create()
{
  raspimouse_msgs__srv__LightSensorsService_Request * msg = (raspimouse_msgs__srv__LightSensorsService_Request *)malloc(sizeof(raspimouse_msgs__srv__LightSensorsService_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__srv__LightSensorsService_Request));
  bool success = raspimouse_msgs__srv__LightSensorsService_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__srv__LightSensorsService_Request__destroy(raspimouse_msgs__srv__LightSensorsService_Request * msg)
{
  if (msg) {
    raspimouse_msgs__srv__LightSensorsService_Request__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__srv__LightSensorsService_Request__Sequence__init(raspimouse_msgs__srv__LightSensorsService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__srv__LightSensorsService_Request * data = NULL;
  if (size) {
    data = (raspimouse_msgs__srv__LightSensorsService_Request *)calloc(size, sizeof(raspimouse_msgs__srv__LightSensorsService_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__srv__LightSensorsService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__srv__LightSensorsService_Request__fini(&data[i - 1]);
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
raspimouse_msgs__srv__LightSensorsService_Request__Sequence__fini(raspimouse_msgs__srv__LightSensorsService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__srv__LightSensorsService_Request__fini(&array->data[i]);
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

raspimouse_msgs__srv__LightSensorsService_Request__Sequence *
raspimouse_msgs__srv__LightSensorsService_Request__Sequence__create(size_t size)
{
  raspimouse_msgs__srv__LightSensorsService_Request__Sequence * array = (raspimouse_msgs__srv__LightSensorsService_Request__Sequence *)malloc(sizeof(raspimouse_msgs__srv__LightSensorsService_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__srv__LightSensorsService_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__srv__LightSensorsService_Request__Sequence__destroy(raspimouse_msgs__srv__LightSensorsService_Request__Sequence * array)
{
  if (array) {
    raspimouse_msgs__srv__LightSensorsService_Request__Sequence__fini(array);
  }
  free(array);
}


bool
raspimouse_msgs__srv__LightSensorsService_Response__init(raspimouse_msgs__srv__LightSensorsService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
raspimouse_msgs__srv__LightSensorsService_Response__fini(raspimouse_msgs__srv__LightSensorsService_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

raspimouse_msgs__srv__LightSensorsService_Response *
raspimouse_msgs__srv__LightSensorsService_Response__create()
{
  raspimouse_msgs__srv__LightSensorsService_Response * msg = (raspimouse_msgs__srv__LightSensorsService_Response *)malloc(sizeof(raspimouse_msgs__srv__LightSensorsService_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raspimouse_msgs__srv__LightSensorsService_Response));
  bool success = raspimouse_msgs__srv__LightSensorsService_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raspimouse_msgs__srv__LightSensorsService_Response__destroy(raspimouse_msgs__srv__LightSensorsService_Response * msg)
{
  if (msg) {
    raspimouse_msgs__srv__LightSensorsService_Response__fini(msg);
  }
  free(msg);
}


bool
raspimouse_msgs__srv__LightSensorsService_Response__Sequence__init(raspimouse_msgs__srv__LightSensorsService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raspimouse_msgs__srv__LightSensorsService_Response * data = NULL;
  if (size) {
    data = (raspimouse_msgs__srv__LightSensorsService_Response *)calloc(size, sizeof(raspimouse_msgs__srv__LightSensorsService_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raspimouse_msgs__srv__LightSensorsService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raspimouse_msgs__srv__LightSensorsService_Response__fini(&data[i - 1]);
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
raspimouse_msgs__srv__LightSensorsService_Response__Sequence__fini(raspimouse_msgs__srv__LightSensorsService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raspimouse_msgs__srv__LightSensorsService_Response__fini(&array->data[i]);
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

raspimouse_msgs__srv__LightSensorsService_Response__Sequence *
raspimouse_msgs__srv__LightSensorsService_Response__Sequence__create(size_t size)
{
  raspimouse_msgs__srv__LightSensorsService_Response__Sequence * array = (raspimouse_msgs__srv__LightSensorsService_Response__Sequence *)malloc(sizeof(raspimouse_msgs__srv__LightSensorsService_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raspimouse_msgs__srv__LightSensorsService_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raspimouse_msgs__srv__LightSensorsService_Response__Sequence__destroy(raspimouse_msgs__srv__LightSensorsService_Response__Sequence * array)
{
  if (array) {
    raspimouse_msgs__srv__LightSensorsService_Response__Sequence__fini(array);
  }
  free(array);
}
