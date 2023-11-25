// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from proj_interfaces:srv/TurtleKill.idl
// generated code does not contain a copyright notice
#include "proj_interfaces/srv/detail/turtle_kill__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
proj_interfaces__srv__TurtleKill_Request__init(proj_interfaces__srv__TurtleKill_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    proj_interfaces__srv__TurtleKill_Request__fini(msg);
    return false;
  }
  return true;
}

void
proj_interfaces__srv__TurtleKill_Request__fini(proj_interfaces__srv__TurtleKill_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
proj_interfaces__srv__TurtleKill_Request__are_equal(const proj_interfaces__srv__TurtleKill_Request * lhs, const proj_interfaces__srv__TurtleKill_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
proj_interfaces__srv__TurtleKill_Request__copy(
  const proj_interfaces__srv__TurtleKill_Request * input,
  proj_interfaces__srv__TurtleKill_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

proj_interfaces__srv__TurtleKill_Request *
proj_interfaces__srv__TurtleKill_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  proj_interfaces__srv__TurtleKill_Request * msg = (proj_interfaces__srv__TurtleKill_Request *)allocator.allocate(sizeof(proj_interfaces__srv__TurtleKill_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(proj_interfaces__srv__TurtleKill_Request));
  bool success = proj_interfaces__srv__TurtleKill_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
proj_interfaces__srv__TurtleKill_Request__destroy(proj_interfaces__srv__TurtleKill_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    proj_interfaces__srv__TurtleKill_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
proj_interfaces__srv__TurtleKill_Request__Sequence__init(proj_interfaces__srv__TurtleKill_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  proj_interfaces__srv__TurtleKill_Request * data = NULL;

  if (size) {
    data = (proj_interfaces__srv__TurtleKill_Request *)allocator.zero_allocate(size, sizeof(proj_interfaces__srv__TurtleKill_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = proj_interfaces__srv__TurtleKill_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        proj_interfaces__srv__TurtleKill_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
proj_interfaces__srv__TurtleKill_Request__Sequence__fini(proj_interfaces__srv__TurtleKill_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      proj_interfaces__srv__TurtleKill_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

proj_interfaces__srv__TurtleKill_Request__Sequence *
proj_interfaces__srv__TurtleKill_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  proj_interfaces__srv__TurtleKill_Request__Sequence * array = (proj_interfaces__srv__TurtleKill_Request__Sequence *)allocator.allocate(sizeof(proj_interfaces__srv__TurtleKill_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = proj_interfaces__srv__TurtleKill_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
proj_interfaces__srv__TurtleKill_Request__Sequence__destroy(proj_interfaces__srv__TurtleKill_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    proj_interfaces__srv__TurtleKill_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
proj_interfaces__srv__TurtleKill_Request__Sequence__are_equal(const proj_interfaces__srv__TurtleKill_Request__Sequence * lhs, const proj_interfaces__srv__TurtleKill_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!proj_interfaces__srv__TurtleKill_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
proj_interfaces__srv__TurtleKill_Request__Sequence__copy(
  const proj_interfaces__srv__TurtleKill_Request__Sequence * input,
  proj_interfaces__srv__TurtleKill_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(proj_interfaces__srv__TurtleKill_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    proj_interfaces__srv__TurtleKill_Request * data =
      (proj_interfaces__srv__TurtleKill_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!proj_interfaces__srv__TurtleKill_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          proj_interfaces__srv__TurtleKill_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!proj_interfaces__srv__TurtleKill_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
proj_interfaces__srv__TurtleKill_Response__init(proj_interfaces__srv__TurtleKill_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
proj_interfaces__srv__TurtleKill_Response__fini(proj_interfaces__srv__TurtleKill_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
proj_interfaces__srv__TurtleKill_Response__are_equal(const proj_interfaces__srv__TurtleKill_Response * lhs, const proj_interfaces__srv__TurtleKill_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
proj_interfaces__srv__TurtleKill_Response__copy(
  const proj_interfaces__srv__TurtleKill_Response * input,
  proj_interfaces__srv__TurtleKill_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

proj_interfaces__srv__TurtleKill_Response *
proj_interfaces__srv__TurtleKill_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  proj_interfaces__srv__TurtleKill_Response * msg = (proj_interfaces__srv__TurtleKill_Response *)allocator.allocate(sizeof(proj_interfaces__srv__TurtleKill_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(proj_interfaces__srv__TurtleKill_Response));
  bool success = proj_interfaces__srv__TurtleKill_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
proj_interfaces__srv__TurtleKill_Response__destroy(proj_interfaces__srv__TurtleKill_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    proj_interfaces__srv__TurtleKill_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
proj_interfaces__srv__TurtleKill_Response__Sequence__init(proj_interfaces__srv__TurtleKill_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  proj_interfaces__srv__TurtleKill_Response * data = NULL;

  if (size) {
    data = (proj_interfaces__srv__TurtleKill_Response *)allocator.zero_allocate(size, sizeof(proj_interfaces__srv__TurtleKill_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = proj_interfaces__srv__TurtleKill_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        proj_interfaces__srv__TurtleKill_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
proj_interfaces__srv__TurtleKill_Response__Sequence__fini(proj_interfaces__srv__TurtleKill_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      proj_interfaces__srv__TurtleKill_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

proj_interfaces__srv__TurtleKill_Response__Sequence *
proj_interfaces__srv__TurtleKill_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  proj_interfaces__srv__TurtleKill_Response__Sequence * array = (proj_interfaces__srv__TurtleKill_Response__Sequence *)allocator.allocate(sizeof(proj_interfaces__srv__TurtleKill_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = proj_interfaces__srv__TurtleKill_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
proj_interfaces__srv__TurtleKill_Response__Sequence__destroy(proj_interfaces__srv__TurtleKill_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    proj_interfaces__srv__TurtleKill_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
proj_interfaces__srv__TurtleKill_Response__Sequence__are_equal(const proj_interfaces__srv__TurtleKill_Response__Sequence * lhs, const proj_interfaces__srv__TurtleKill_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!proj_interfaces__srv__TurtleKill_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
proj_interfaces__srv__TurtleKill_Response__Sequence__copy(
  const proj_interfaces__srv__TurtleKill_Response__Sequence * input,
  proj_interfaces__srv__TurtleKill_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(proj_interfaces__srv__TurtleKill_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    proj_interfaces__srv__TurtleKill_Response * data =
      (proj_interfaces__srv__TurtleKill_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!proj_interfaces__srv__TurtleKill_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          proj_interfaces__srv__TurtleKill_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!proj_interfaces__srv__TurtleKill_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
