// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from raspimouse_msgs:msg/TimedMotion.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__TIMED_MOTION__FUNCTIONS_H_
#define RASPIMOUSE_MSGS__MSG__DETAIL__TIMED_MOTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "raspimouse_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "raspimouse_msgs/msg/detail/timed_motion__struct.h"

/// Initialize msg/TimedMotion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__msg__TimedMotion
 * )) before or use
 * raspimouse_msgs__msg__TimedMotion__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__msg__TimedMotion__init(raspimouse_msgs__msg__TimedMotion * msg);

/// Finalize msg/TimedMotion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__msg__TimedMotion__fini(raspimouse_msgs__msg__TimedMotion * msg);

/// Create msg/TimedMotion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__msg__TimedMotion__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__msg__TimedMotion *
raspimouse_msgs__msg__TimedMotion__create();

/// Destroy msg/TimedMotion message.
/**
 * It calls
 * raspimouse_msgs__msg__TimedMotion__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__msg__TimedMotion__destroy(raspimouse_msgs__msg__TimedMotion * msg);


/// Initialize array of msg/TimedMotion messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__msg__TimedMotion__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__msg__TimedMotion__Sequence__init(raspimouse_msgs__msg__TimedMotion__Sequence * array, size_t size);

/// Finalize array of msg/TimedMotion messages.
/**
 * It calls
 * raspimouse_msgs__msg__TimedMotion__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__msg__TimedMotion__Sequence__fini(raspimouse_msgs__msg__TimedMotion__Sequence * array);

/// Create array of msg/TimedMotion messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__msg__TimedMotion__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__msg__TimedMotion__Sequence *
raspimouse_msgs__msg__TimedMotion__Sequence__create(size_t size);

/// Destroy array of msg/TimedMotion messages.
/**
 * It calls
 * raspimouse_msgs__msg__TimedMotion__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__msg__TimedMotion__Sequence__destroy(raspimouse_msgs__msg__TimedMotion__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__TIMED_MOTION__FUNCTIONS_H_
