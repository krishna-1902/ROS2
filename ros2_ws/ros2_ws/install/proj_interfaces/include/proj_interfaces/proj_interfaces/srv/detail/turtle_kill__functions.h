// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from proj_interfaces:srv/TurtleKill.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__FUNCTIONS_H_
#define PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "proj_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "proj_interfaces/srv/detail/turtle_kill__struct.h"

/// Initialize srv/TurtleKill message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * proj_interfaces__srv__TurtleKill_Request
 * )) before or use
 * proj_interfaces__srv__TurtleKill_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Request__init(proj_interfaces__srv__TurtleKill_Request * msg);

/// Finalize srv/TurtleKill message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__srv__TurtleKill_Request__fini(proj_interfaces__srv__TurtleKill_Request * msg);

/// Create srv/TurtleKill message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * proj_interfaces__srv__TurtleKill_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
proj_interfaces__srv__TurtleKill_Request *
proj_interfaces__srv__TurtleKill_Request__create();

/// Destroy srv/TurtleKill message.
/**
 * It calls
 * proj_interfaces__srv__TurtleKill_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__srv__TurtleKill_Request__destroy(proj_interfaces__srv__TurtleKill_Request * msg);

/// Check for srv/TurtleKill message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Request__are_equal(const proj_interfaces__srv__TurtleKill_Request * lhs, const proj_interfaces__srv__TurtleKill_Request * rhs);

/// Copy a srv/TurtleKill message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Request__copy(
  const proj_interfaces__srv__TurtleKill_Request * input,
  proj_interfaces__srv__TurtleKill_Request * output);

/// Initialize array of srv/TurtleKill messages.
/**
 * It allocates the memory for the number of elements and calls
 * proj_interfaces__srv__TurtleKill_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Request__Sequence__init(proj_interfaces__srv__TurtleKill_Request__Sequence * array, size_t size);

/// Finalize array of srv/TurtleKill messages.
/**
 * It calls
 * proj_interfaces__srv__TurtleKill_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__srv__TurtleKill_Request__Sequence__fini(proj_interfaces__srv__TurtleKill_Request__Sequence * array);

/// Create array of srv/TurtleKill messages.
/**
 * It allocates the memory for the array and calls
 * proj_interfaces__srv__TurtleKill_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
proj_interfaces__srv__TurtleKill_Request__Sequence *
proj_interfaces__srv__TurtleKill_Request__Sequence__create(size_t size);

/// Destroy array of srv/TurtleKill messages.
/**
 * It calls
 * proj_interfaces__srv__TurtleKill_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__srv__TurtleKill_Request__Sequence__destroy(proj_interfaces__srv__TurtleKill_Request__Sequence * array);

/// Check for srv/TurtleKill message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Request__Sequence__are_equal(const proj_interfaces__srv__TurtleKill_Request__Sequence * lhs, const proj_interfaces__srv__TurtleKill_Request__Sequence * rhs);

/// Copy an array of srv/TurtleKill messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Request__Sequence__copy(
  const proj_interfaces__srv__TurtleKill_Request__Sequence * input,
  proj_interfaces__srv__TurtleKill_Request__Sequence * output);

/// Initialize srv/TurtleKill message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * proj_interfaces__srv__TurtleKill_Response
 * )) before or use
 * proj_interfaces__srv__TurtleKill_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Response__init(proj_interfaces__srv__TurtleKill_Response * msg);

/// Finalize srv/TurtleKill message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__srv__TurtleKill_Response__fini(proj_interfaces__srv__TurtleKill_Response * msg);

/// Create srv/TurtleKill message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * proj_interfaces__srv__TurtleKill_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
proj_interfaces__srv__TurtleKill_Response *
proj_interfaces__srv__TurtleKill_Response__create();

/// Destroy srv/TurtleKill message.
/**
 * It calls
 * proj_interfaces__srv__TurtleKill_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__srv__TurtleKill_Response__destroy(proj_interfaces__srv__TurtleKill_Response * msg);

/// Check for srv/TurtleKill message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Response__are_equal(const proj_interfaces__srv__TurtleKill_Response * lhs, const proj_interfaces__srv__TurtleKill_Response * rhs);

/// Copy a srv/TurtleKill message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Response__copy(
  const proj_interfaces__srv__TurtleKill_Response * input,
  proj_interfaces__srv__TurtleKill_Response * output);

/// Initialize array of srv/TurtleKill messages.
/**
 * It allocates the memory for the number of elements and calls
 * proj_interfaces__srv__TurtleKill_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Response__Sequence__init(proj_interfaces__srv__TurtleKill_Response__Sequence * array, size_t size);

/// Finalize array of srv/TurtleKill messages.
/**
 * It calls
 * proj_interfaces__srv__TurtleKill_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__srv__TurtleKill_Response__Sequence__fini(proj_interfaces__srv__TurtleKill_Response__Sequence * array);

/// Create array of srv/TurtleKill messages.
/**
 * It allocates the memory for the array and calls
 * proj_interfaces__srv__TurtleKill_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
proj_interfaces__srv__TurtleKill_Response__Sequence *
proj_interfaces__srv__TurtleKill_Response__Sequence__create(size_t size);

/// Destroy array of srv/TurtleKill messages.
/**
 * It calls
 * proj_interfaces__srv__TurtleKill_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__srv__TurtleKill_Response__Sequence__destroy(proj_interfaces__srv__TurtleKill_Response__Sequence * array);

/// Check for srv/TurtleKill message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Response__Sequence__are_equal(const proj_interfaces__srv__TurtleKill_Response__Sequence * lhs, const proj_interfaces__srv__TurtleKill_Response__Sequence * rhs);

/// Copy an array of srv/TurtleKill messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__srv__TurtleKill_Response__Sequence__copy(
  const proj_interfaces__srv__TurtleKill_Response__Sequence * input,
  proj_interfaces__srv__TurtleKill_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__FUNCTIONS_H_
