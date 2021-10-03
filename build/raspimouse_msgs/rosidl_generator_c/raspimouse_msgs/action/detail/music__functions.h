// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from raspimouse_msgs:action/Music.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__ACTION__DETAIL__MUSIC__FUNCTIONS_H_
#define RASPIMOUSE_MSGS__ACTION__DETAIL__MUSIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "raspimouse_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "raspimouse_msgs/action/detail/music__struct.h"

/// Initialize action/Music message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__action__Music_Goal
 * )) before or use
 * raspimouse_msgs__action__Music_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_Goal__init(raspimouse_msgs__action__Music_Goal * msg);

/// Finalize action/Music message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Goal__fini(raspimouse_msgs__action__Music_Goal * msg);

/// Create action/Music message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__action__Music_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_Goal *
raspimouse_msgs__action__Music_Goal__create();

/// Destroy action/Music message.
/**
 * It calls
 * raspimouse_msgs__action__Music_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Goal__destroy(raspimouse_msgs__action__Music_Goal * msg);


/// Initialize array of action/Music messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__action__Music_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_Goal__Sequence__init(raspimouse_msgs__action__Music_Goal__Sequence * array, size_t size);

/// Finalize array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Goal__Sequence__fini(raspimouse_msgs__action__Music_Goal__Sequence * array);

/// Create array of action/Music messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__action__Music_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_Goal__Sequence *
raspimouse_msgs__action__Music_Goal__Sequence__create(size_t size);

/// Destroy array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Goal__Sequence__destroy(raspimouse_msgs__action__Music_Goal__Sequence * array);

/// Initialize action/Music message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__action__Music_Result
 * )) before or use
 * raspimouse_msgs__action__Music_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_Result__init(raspimouse_msgs__action__Music_Result * msg);

/// Finalize action/Music message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Result__fini(raspimouse_msgs__action__Music_Result * msg);

/// Create action/Music message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__action__Music_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_Result *
raspimouse_msgs__action__Music_Result__create();

/// Destroy action/Music message.
/**
 * It calls
 * raspimouse_msgs__action__Music_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Result__destroy(raspimouse_msgs__action__Music_Result * msg);


/// Initialize array of action/Music messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__action__Music_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_Result__Sequence__init(raspimouse_msgs__action__Music_Result__Sequence * array, size_t size);

/// Finalize array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Result__Sequence__fini(raspimouse_msgs__action__Music_Result__Sequence * array);

/// Create array of action/Music messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__action__Music_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_Result__Sequence *
raspimouse_msgs__action__Music_Result__Sequence__create(size_t size);

/// Destroy array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Result__Sequence__destroy(raspimouse_msgs__action__Music_Result__Sequence * array);

/// Initialize action/Music message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__action__Music_Feedback
 * )) before or use
 * raspimouse_msgs__action__Music_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_Feedback__init(raspimouse_msgs__action__Music_Feedback * msg);

/// Finalize action/Music message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Feedback__fini(raspimouse_msgs__action__Music_Feedback * msg);

/// Create action/Music message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__action__Music_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_Feedback *
raspimouse_msgs__action__Music_Feedback__create();

/// Destroy action/Music message.
/**
 * It calls
 * raspimouse_msgs__action__Music_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Feedback__destroy(raspimouse_msgs__action__Music_Feedback * msg);


/// Initialize array of action/Music messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__action__Music_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_Feedback__Sequence__init(raspimouse_msgs__action__Music_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Feedback__Sequence__fini(raspimouse_msgs__action__Music_Feedback__Sequence * array);

/// Create array of action/Music messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__action__Music_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_Feedback__Sequence *
raspimouse_msgs__action__Music_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_Feedback__Sequence__destroy(raspimouse_msgs__action__Music_Feedback__Sequence * array);

/// Initialize action/Music message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__action__Music_SendGoal_Request
 * )) before or use
 * raspimouse_msgs__action__Music_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_SendGoal_Request__init(raspimouse_msgs__action__Music_SendGoal_Request * msg);

/// Finalize action/Music message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_SendGoal_Request__fini(raspimouse_msgs__action__Music_SendGoal_Request * msg);

/// Create action/Music message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__action__Music_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_SendGoal_Request *
raspimouse_msgs__action__Music_SendGoal_Request__create();

/// Destroy action/Music message.
/**
 * It calls
 * raspimouse_msgs__action__Music_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_SendGoal_Request__destroy(raspimouse_msgs__action__Music_SendGoal_Request * msg);


/// Initialize array of action/Music messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__action__Music_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_SendGoal_Request__Sequence__init(raspimouse_msgs__action__Music_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_SendGoal_Request__Sequence__fini(raspimouse_msgs__action__Music_SendGoal_Request__Sequence * array);

/// Create array of action/Music messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__action__Music_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_SendGoal_Request__Sequence *
raspimouse_msgs__action__Music_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_SendGoal_Request__Sequence__destroy(raspimouse_msgs__action__Music_SendGoal_Request__Sequence * array);

/// Initialize action/Music message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__action__Music_SendGoal_Response
 * )) before or use
 * raspimouse_msgs__action__Music_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_SendGoal_Response__init(raspimouse_msgs__action__Music_SendGoal_Response * msg);

/// Finalize action/Music message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_SendGoal_Response__fini(raspimouse_msgs__action__Music_SendGoal_Response * msg);

/// Create action/Music message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__action__Music_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_SendGoal_Response *
raspimouse_msgs__action__Music_SendGoal_Response__create();

/// Destroy action/Music message.
/**
 * It calls
 * raspimouse_msgs__action__Music_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_SendGoal_Response__destroy(raspimouse_msgs__action__Music_SendGoal_Response * msg);


/// Initialize array of action/Music messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__action__Music_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_SendGoal_Response__Sequence__init(raspimouse_msgs__action__Music_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_SendGoal_Response__Sequence__fini(raspimouse_msgs__action__Music_SendGoal_Response__Sequence * array);

/// Create array of action/Music messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__action__Music_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_SendGoal_Response__Sequence *
raspimouse_msgs__action__Music_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_SendGoal_Response__Sequence__destroy(raspimouse_msgs__action__Music_SendGoal_Response__Sequence * array);

/// Initialize action/Music message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__action__Music_GetResult_Request
 * )) before or use
 * raspimouse_msgs__action__Music_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_GetResult_Request__init(raspimouse_msgs__action__Music_GetResult_Request * msg);

/// Finalize action/Music message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_GetResult_Request__fini(raspimouse_msgs__action__Music_GetResult_Request * msg);

/// Create action/Music message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__action__Music_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_GetResult_Request *
raspimouse_msgs__action__Music_GetResult_Request__create();

/// Destroy action/Music message.
/**
 * It calls
 * raspimouse_msgs__action__Music_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_GetResult_Request__destroy(raspimouse_msgs__action__Music_GetResult_Request * msg);


/// Initialize array of action/Music messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__action__Music_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_GetResult_Request__Sequence__init(raspimouse_msgs__action__Music_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_GetResult_Request__Sequence__fini(raspimouse_msgs__action__Music_GetResult_Request__Sequence * array);

/// Create array of action/Music messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__action__Music_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_GetResult_Request__Sequence *
raspimouse_msgs__action__Music_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_GetResult_Request__Sequence__destroy(raspimouse_msgs__action__Music_GetResult_Request__Sequence * array);

/// Initialize action/Music message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__action__Music_GetResult_Response
 * )) before or use
 * raspimouse_msgs__action__Music_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_GetResult_Response__init(raspimouse_msgs__action__Music_GetResult_Response * msg);

/// Finalize action/Music message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_GetResult_Response__fini(raspimouse_msgs__action__Music_GetResult_Response * msg);

/// Create action/Music message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__action__Music_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_GetResult_Response *
raspimouse_msgs__action__Music_GetResult_Response__create();

/// Destroy action/Music message.
/**
 * It calls
 * raspimouse_msgs__action__Music_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_GetResult_Response__destroy(raspimouse_msgs__action__Music_GetResult_Response * msg);


/// Initialize array of action/Music messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__action__Music_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_GetResult_Response__Sequence__init(raspimouse_msgs__action__Music_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_GetResult_Response__Sequence__fini(raspimouse_msgs__action__Music_GetResult_Response__Sequence * array);

/// Create array of action/Music messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__action__Music_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_GetResult_Response__Sequence *
raspimouse_msgs__action__Music_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_GetResult_Response__Sequence__destroy(raspimouse_msgs__action__Music_GetResult_Response__Sequence * array);

/// Initialize action/Music message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__action__Music_FeedbackMessage
 * )) before or use
 * raspimouse_msgs__action__Music_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_FeedbackMessage__init(raspimouse_msgs__action__Music_FeedbackMessage * msg);

/// Finalize action/Music message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_FeedbackMessage__fini(raspimouse_msgs__action__Music_FeedbackMessage * msg);

/// Create action/Music message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__action__Music_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_FeedbackMessage *
raspimouse_msgs__action__Music_FeedbackMessage__create();

/// Destroy action/Music message.
/**
 * It calls
 * raspimouse_msgs__action__Music_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_FeedbackMessage__destroy(raspimouse_msgs__action__Music_FeedbackMessage * msg);


/// Initialize array of action/Music messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__action__Music_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__action__Music_FeedbackMessage__Sequence__init(raspimouse_msgs__action__Music_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_FeedbackMessage__Sequence__fini(raspimouse_msgs__action__Music_FeedbackMessage__Sequence * array);

/// Create array of action/Music messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__action__Music_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__action__Music_FeedbackMessage__Sequence *
raspimouse_msgs__action__Music_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Music messages.
/**
 * It calls
 * raspimouse_msgs__action__Music_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__action__Music_FeedbackMessage__Sequence__destroy(raspimouse_msgs__action__Music_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__ACTION__DETAIL__MUSIC__FUNCTIONS_H_
