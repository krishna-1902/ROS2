// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from proj_interfaces:srv/TurtleKill.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__STRUCT_H_
#define PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TurtleKill in the package proj_interfaces.
typedef struct proj_interfaces__srv__TurtleKill_Request
{
  rosidl_runtime_c__String name;
} proj_interfaces__srv__TurtleKill_Request;

// Struct for a sequence of proj_interfaces__srv__TurtleKill_Request.
typedef struct proj_interfaces__srv__TurtleKill_Request__Sequence
{
  proj_interfaces__srv__TurtleKill_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} proj_interfaces__srv__TurtleKill_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TurtleKill in the package proj_interfaces.
typedef struct proj_interfaces__srv__TurtleKill_Response
{
  uint8_t structure_needs_at_least_one_member;
} proj_interfaces__srv__TurtleKill_Response;

// Struct for a sequence of proj_interfaces__srv__TurtleKill_Response.
typedef struct proj_interfaces__srv__TurtleKill_Response__Sequence
{
  proj_interfaces__srv__TurtleKill_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} proj_interfaces__srv__TurtleKill_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__STRUCT_H_
