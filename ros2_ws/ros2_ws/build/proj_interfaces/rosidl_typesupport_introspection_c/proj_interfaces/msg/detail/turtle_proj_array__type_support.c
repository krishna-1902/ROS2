// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from proj_interfaces:msg/TurtleProjArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "proj_interfaces/msg/detail/turtle_proj_array__rosidl_typesupport_introspection_c.h"
#include "proj_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "proj_interfaces/msg/detail/turtle_proj_array__functions.h"
#include "proj_interfaces/msg/detail/turtle_proj_array__struct.h"


// Include directives for member types
// Member `turtles`
#include "proj_interfaces/msg/turtle_proj.h"
// Member `turtles`
#include "proj_interfaces/msg/detail/turtle_proj__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  proj_interfaces__msg__TurtleProjArray__init(message_memory);
}

void proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_fini_function(void * message_memory)
{
  proj_interfaces__msg__TurtleProjArray__fini(message_memory);
}

size_t proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__size_function__TurtleProjArray__turtles(
  const void * untyped_member)
{
  const proj_interfaces__msg__TurtleProj__Sequence * member =
    (const proj_interfaces__msg__TurtleProj__Sequence *)(untyped_member);
  return member->size;
}

const void * proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__get_const_function__TurtleProjArray__turtles(
  const void * untyped_member, size_t index)
{
  const proj_interfaces__msg__TurtleProj__Sequence * member =
    (const proj_interfaces__msg__TurtleProj__Sequence *)(untyped_member);
  return &member->data[index];
}

void * proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__get_function__TurtleProjArray__turtles(
  void * untyped_member, size_t index)
{
  proj_interfaces__msg__TurtleProj__Sequence * member =
    (proj_interfaces__msg__TurtleProj__Sequence *)(untyped_member);
  return &member->data[index];
}

void proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__fetch_function__TurtleProjArray__turtles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const proj_interfaces__msg__TurtleProj * item =
    ((const proj_interfaces__msg__TurtleProj *)
    proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__get_const_function__TurtleProjArray__turtles(untyped_member, index));
  proj_interfaces__msg__TurtleProj * value =
    (proj_interfaces__msg__TurtleProj *)(untyped_value);
  *value = *item;
}

void proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__assign_function__TurtleProjArray__turtles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  proj_interfaces__msg__TurtleProj * item =
    ((proj_interfaces__msg__TurtleProj *)
    proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__get_function__TurtleProjArray__turtles(untyped_member, index));
  const proj_interfaces__msg__TurtleProj * value =
    (const proj_interfaces__msg__TurtleProj *)(untyped_value);
  *item = *value;
}

bool proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__resize_function__TurtleProjArray__turtles(
  void * untyped_member, size_t size)
{
  proj_interfaces__msg__TurtleProj__Sequence * member =
    (proj_interfaces__msg__TurtleProj__Sequence *)(untyped_member);
  proj_interfaces__msg__TurtleProj__Sequence__fini(member);
  return proj_interfaces__msg__TurtleProj__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_message_member_array[1] = {
  {
    "turtles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(proj_interfaces__msg__TurtleProjArray, turtles),  // bytes offset in struct
    NULL,  // default value
    proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__size_function__TurtleProjArray__turtles,  // size() function pointer
    proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__get_const_function__TurtleProjArray__turtles,  // get_const(index) function pointer
    proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__get_function__TurtleProjArray__turtles,  // get(index) function pointer
    proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__fetch_function__TurtleProjArray__turtles,  // fetch(index, &value) function pointer
    proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__assign_function__TurtleProjArray__turtles,  // assign(index, value) function pointer
    proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__resize_function__TurtleProjArray__turtles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_message_members = {
  "proj_interfaces__msg",  // message namespace
  "TurtleProjArray",  // message name
  1,  // number of fields
  sizeof(proj_interfaces__msg__TurtleProjArray),
  proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_message_member_array,  // message members
  proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_init_function,  // function to initialize message memory (memory has to be allocated)
  proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_message_type_support_handle = {
  0,
  &proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_proj_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, proj_interfaces, msg, TurtleProjArray)() {
  proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, proj_interfaces, msg, TurtleProj)();
  if (!proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_message_type_support_handle.typesupport_identifier) {
    proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &proj_interfaces__msg__TurtleProjArray__rosidl_typesupport_introspection_c__TurtleProjArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
