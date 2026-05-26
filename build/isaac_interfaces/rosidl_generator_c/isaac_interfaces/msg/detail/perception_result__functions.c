// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isaac_interfaces:msg/PerceptionResult.idl
// generated code does not contain a copyright notice
#include "isaac_interfaces/msg/detail/perception_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_id`
// Member `object_type`
#include "rosidl_runtime_c/string_functions.h"

bool
isaac_interfaces__msg__PerceptionResult__init(isaac_interfaces__msg__PerceptionResult * msg)
{
  if (!msg) {
    return false;
  }
  // mineral_detected
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    isaac_interfaces__msg__PerceptionResult__fini(msg);
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__init(&msg->object_type)) {
    isaac_interfaces__msg__PerceptionResult__fini(msg);
    return false;
  }
  // confidence
  // x
  // y
  // z
  // obstacle_detected
  // obstacle_distance
  // terrain_traversable
  // terrain_slope
  return true;
}

void
isaac_interfaces__msg__PerceptionResult__fini(isaac_interfaces__msg__PerceptionResult * msg)
{
  if (!msg) {
    return;
  }
  // mineral_detected
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // object_type
  rosidl_runtime_c__String__fini(&msg->object_type);
  // confidence
  // x
  // y
  // z
  // obstacle_detected
  // obstacle_distance
  // terrain_traversable
  // terrain_slope
}

bool
isaac_interfaces__msg__PerceptionResult__are_equal(const isaac_interfaces__msg__PerceptionResult * lhs, const isaac_interfaces__msg__PerceptionResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mineral_detected
  if (lhs->mineral_detected != rhs->mineral_detected) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_type), &(rhs->object_type)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // obstacle_detected
  if (lhs->obstacle_detected != rhs->obstacle_detected) {
    return false;
  }
  // obstacle_distance
  if (lhs->obstacle_distance != rhs->obstacle_distance) {
    return false;
  }
  // terrain_traversable
  if (lhs->terrain_traversable != rhs->terrain_traversable) {
    return false;
  }
  // terrain_slope
  if (lhs->terrain_slope != rhs->terrain_slope) {
    return false;
  }
  return true;
}

bool
isaac_interfaces__msg__PerceptionResult__copy(
  const isaac_interfaces__msg__PerceptionResult * input,
  isaac_interfaces__msg__PerceptionResult * output)
{
  if (!input || !output) {
    return false;
  }
  // mineral_detected
  output->mineral_detected = input->mineral_detected;
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__copy(
      &(input->object_type), &(output->object_type)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // obstacle_detected
  output->obstacle_detected = input->obstacle_detected;
  // obstacle_distance
  output->obstacle_distance = input->obstacle_distance;
  // terrain_traversable
  output->terrain_traversable = input->terrain_traversable;
  // terrain_slope
  output->terrain_slope = input->terrain_slope;
  return true;
}

isaac_interfaces__msg__PerceptionResult *
isaac_interfaces__msg__PerceptionResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__PerceptionResult * msg = (isaac_interfaces__msg__PerceptionResult *)allocator.allocate(sizeof(isaac_interfaces__msg__PerceptionResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isaac_interfaces__msg__PerceptionResult));
  bool success = isaac_interfaces__msg__PerceptionResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isaac_interfaces__msg__PerceptionResult__destroy(isaac_interfaces__msg__PerceptionResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isaac_interfaces__msg__PerceptionResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isaac_interfaces__msg__PerceptionResult__Sequence__init(isaac_interfaces__msg__PerceptionResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__PerceptionResult * data = NULL;

  if (size) {
    data = (isaac_interfaces__msg__PerceptionResult *)allocator.zero_allocate(size, sizeof(isaac_interfaces__msg__PerceptionResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isaac_interfaces__msg__PerceptionResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isaac_interfaces__msg__PerceptionResult__fini(&data[i - 1]);
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
isaac_interfaces__msg__PerceptionResult__Sequence__fini(isaac_interfaces__msg__PerceptionResult__Sequence * array)
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
      isaac_interfaces__msg__PerceptionResult__fini(&array->data[i]);
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

isaac_interfaces__msg__PerceptionResult__Sequence *
isaac_interfaces__msg__PerceptionResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__PerceptionResult__Sequence * array = (isaac_interfaces__msg__PerceptionResult__Sequence *)allocator.allocate(sizeof(isaac_interfaces__msg__PerceptionResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isaac_interfaces__msg__PerceptionResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isaac_interfaces__msg__PerceptionResult__Sequence__destroy(isaac_interfaces__msg__PerceptionResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isaac_interfaces__msg__PerceptionResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isaac_interfaces__msg__PerceptionResult__Sequence__are_equal(const isaac_interfaces__msg__PerceptionResult__Sequence * lhs, const isaac_interfaces__msg__PerceptionResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isaac_interfaces__msg__PerceptionResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isaac_interfaces__msg__PerceptionResult__Sequence__copy(
  const isaac_interfaces__msg__PerceptionResult__Sequence * input,
  isaac_interfaces__msg__PerceptionResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isaac_interfaces__msg__PerceptionResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isaac_interfaces__msg__PerceptionResult * data =
      (isaac_interfaces__msg__PerceptionResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isaac_interfaces__msg__PerceptionResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isaac_interfaces__msg__PerceptionResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isaac_interfaces__msg__PerceptionResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
