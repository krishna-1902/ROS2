// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from proj_interfaces:msg/TurtleProj.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "proj_interfaces/msg/detail/turtle_proj__rosidl_typesupport_introspection_c.h"
#include "proj_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "proj_interfaces/msg/detail/turtle_proj__functions.h"
#include "proj_interfaces/msg/detail/turtle_proj__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  proj_interfaces__msg__TurtleProj__init(message_memory);
}

void proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_fini_function(void * message_memory)
{
  proj_interfaces__msg__TurtleProj__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(proj_interfaces__msg__TurtleProj, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(proj_interfaces__msg__TurtleProj, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(proj_interfaces__msg__TurtleProj, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(proj_interfaces__msg__TurtleProj, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_message_members = {
  "proj_interfaces__msg",  // message namespace
  "TurtleProj",  // message name
  4,  // number of fields
  sizeof(proj_interfaces__msg__TurtleProj),
  proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_message_member_array,  // message members
  proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_init_function,  // function to initialize message memory (memory has to be allocated)
  proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_message_type_support_handle = {
  0,
  &proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_proj_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, proj_interfaces, msg, TurtleProj)() {
  if (!proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_message_type_support_handle.typesupport_identifier) {
    proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &proj_interfaces__msg__TurtleProj__rosidl_typesupport_introspection_c__TurtleProj_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
