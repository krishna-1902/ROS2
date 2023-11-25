// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from proj_interfaces:msg/TurtleProjArray.idl
// generated code does not contain a copyright notice
#include "proj_interfaces/msg/detail/turtle_proj_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `turtles`
#include "proj_interfaces/msg/detail/turtle_proj__functions.h"

bool
proj_interfaces__msg__TurtleProjArray__init(proj_interfaces__msg__TurtleProjArray * msg)
{
  if (!msg) {
    return false;
  }
  // turtles
  if (!proj_interfaces__msg__TurtleProj__Sequence__init(&msg->turtles, 0)) {
    proj_interfaces__msg__TurtleProjArray__fini(msg);
    return false;
  }
  return true;
}

void
proj_interfaces__msg__TurtleProjArray__fini(proj_interfaces__msg__TurtleProjArray * msg)
{
  if (!msg) {
    return;
  }
  // turtles
  proj_interfaces__msg__TurtleProj__Sequence__fini(&msg->turtles);
}

bool
proj_interfaces__msg__TurtleProjArray__are_equal(const proj_interfaces__msg__TurtleProjArray * lhs, const proj_interfaces__msg__TurtleProjArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtles
  if (!proj_interfaces__msg__TurtleProj__Sequence__are_equal(
      &(lhs->turtles), &(rhs->turtles)))
  {
    return false;
  }
  return true;
}

bool
proj_interfaces__msg__TurtleProjArray__copy(
  const proj_interfaces__msg__TurtleProjArray * input,
  proj_interfaces__msg__TurtleProjArray * output)
{
  if (!input || !output) {
    return false;
  }
  // turtles
  if (!proj_interfaces__msg__TurtleProj__Sequence__copy(
      &(input->turtles), &(output->turtles)))
  {
    return false;
  }
  return true;
}

proj_interfaces__msg__TurtleProjArray *
proj_interfaces__msg__TurtleProjArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  proj_interfaces__msg__TurtleProjArray * msg = (proj_interfaces__msg__TurtleProjArray *)allocator.allocate(sizeof(proj_interfaces__msg__TurtleProjArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(proj_interfaces__msg__TurtleProjArray));
  bool success = proj_interfaces__msg__TurtleProjArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
proj_interfaces__msg__TurtleProjArray__destroy(proj_interfaces__msg__TurtleProjArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    proj_interfaces__msg__TurtleProjArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
proj_interfaces__msg__TurtleProjArray__Sequence__init(proj_interfaces__msg__TurtleProjArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  proj_interfaces__msg__TurtleProjArray * data = NULL;

  if (size) {
    data = (proj_interfaces__msg__TurtleProjArray *)allocator.zero_allocate(size, sizeof(proj_interfaces__msg__TurtleProjArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = proj_interfaces__msg__TurtleProjArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        proj_interfaces__msg__TurtleProjArray__fini(&data[i - 1]);
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
proj_interfaces__msg__TurtleProjArray__Sequence__fini(proj_interfaces__msg__TurtleProjArray__Sequence * array)
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
      proj_interfaces__msg__TurtleProjArray__fini(&array->data[i]);
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

proj_interfaces__msg__TurtleProjArray__Sequence *
proj_interfaces__msg__TurtleProjArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  proj_interfaces__msg__TurtleProjArray__Sequence * array = (proj_interfaces__msg__TurtleProjArray__Sequence *)allocator.allocate(sizeof(proj_interfaces__msg__TurtleProjArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = proj_interfaces__msg__TurtleProjArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
proj_interfaces__msg__TurtleProjArray__Sequence__destroy(proj_interfaces__msg__TurtleProjArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    proj_interfaces__msg__TurtleProjArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
proj_interfaces__msg__TurtleProjArray__Sequence__are_equal(const proj_interfaces__msg__TurtleProjArray__Sequence * lhs, const proj_interfaces__msg__TurtleProjArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!proj_interfaces__msg__TurtleProjArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
proj_interfaces__msg__TurtleProjArray__Sequence__copy(
  const proj_interfaces__msg__TurtleProjArray__Sequence * input,
  proj_interfaces__msg__TurtleProjArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(proj_interfaces__msg__TurtleProjArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    proj_interfaces__msg__TurtleProjArray * data =
      (proj_interfaces__msg__TurtleProjArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!proj_interfaces__msg__TurtleProjArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          proj_interfaces__msg__TurtleProjArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!proj_interfaces__msg__TurtleProjArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
