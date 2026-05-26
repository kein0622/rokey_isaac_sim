// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isaac_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice
#include "isaac_interfaces/msg/detail/mission_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
// Member `previous_state`
// Member `active_task`
// Member `last_error`
#include "rosidl_runtime_c/string_functions.h"

bool
isaac_interfaces__msg__MissionState__init(isaac_interfaces__msg__MissionState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    isaac_interfaces__msg__MissionState__fini(msg);
    return false;
  }
  // previous_state
  if (!rosidl_runtime_c__String__init(&msg->previous_state)) {
    isaac_interfaces__msg__MissionState__fini(msg);
    return false;
  }
  // battery_percent
  // low_battery
  // critical_battery
  // cargo_count
  // cargo_capacity
  // collected_count
  // collection_goal
  // active_task
  if (!rosidl_runtime_c__String__init(&msg->active_task)) {
    isaac_interfaces__msg__MissionState__fini(msg);
    return false;
  }
  // last_error
  if (!rosidl_runtime_c__String__init(&msg->last_error)) {
    isaac_interfaces__msg__MissionState__fini(msg);
    return false;
  }
  return true;
}

void
isaac_interfaces__msg__MissionState__fini(isaac_interfaces__msg__MissionState * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // previous_state
  rosidl_runtime_c__String__fini(&msg->previous_state);
  // battery_percent
  // low_battery
  // critical_battery
  // cargo_count
  // cargo_capacity
  // collected_count
  // collection_goal
  // active_task
  rosidl_runtime_c__String__fini(&msg->active_task);
  // last_error
  rosidl_runtime_c__String__fini(&msg->last_error);
}

bool
isaac_interfaces__msg__MissionState__are_equal(const isaac_interfaces__msg__MissionState * lhs, const isaac_interfaces__msg__MissionState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // previous_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->previous_state), &(rhs->previous_state)))
  {
    return false;
  }
  // battery_percent
  if (lhs->battery_percent != rhs->battery_percent) {
    return false;
  }
  // low_battery
  if (lhs->low_battery != rhs->low_battery) {
    return false;
  }
  // critical_battery
  if (lhs->critical_battery != rhs->critical_battery) {
    return false;
  }
  // cargo_count
  if (lhs->cargo_count != rhs->cargo_count) {
    return false;
  }
  // cargo_capacity
  if (lhs->cargo_capacity != rhs->cargo_capacity) {
    return false;
  }
  // collected_count
  if (lhs->collected_count != rhs->collected_count) {
    return false;
  }
  // collection_goal
  if (lhs->collection_goal != rhs->collection_goal) {
    return false;
  }
  // active_task
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->active_task), &(rhs->active_task)))
  {
    return false;
  }
  // last_error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_error), &(rhs->last_error)))
  {
    return false;
  }
  return true;
}

bool
isaac_interfaces__msg__MissionState__copy(
  const isaac_interfaces__msg__MissionState * input,
  isaac_interfaces__msg__MissionState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // previous_state
  if (!rosidl_runtime_c__String__copy(
      &(input->previous_state), &(output->previous_state)))
  {
    return false;
  }
  // battery_percent
  output->battery_percent = input->battery_percent;
  // low_battery
  output->low_battery = input->low_battery;
  // critical_battery
  output->critical_battery = input->critical_battery;
  // cargo_count
  output->cargo_count = input->cargo_count;
  // cargo_capacity
  output->cargo_capacity = input->cargo_capacity;
  // collected_count
  output->collected_count = input->collected_count;
  // collection_goal
  output->collection_goal = input->collection_goal;
  // active_task
  if (!rosidl_runtime_c__String__copy(
      &(input->active_task), &(output->active_task)))
  {
    return false;
  }
  // last_error
  if (!rosidl_runtime_c__String__copy(
      &(input->last_error), &(output->last_error)))
  {
    return false;
  }
  return true;
}

isaac_interfaces__msg__MissionState *
isaac_interfaces__msg__MissionState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__MissionState * msg = (isaac_interfaces__msg__MissionState *)allocator.allocate(sizeof(isaac_interfaces__msg__MissionState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isaac_interfaces__msg__MissionState));
  bool success = isaac_interfaces__msg__MissionState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isaac_interfaces__msg__MissionState__destroy(isaac_interfaces__msg__MissionState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isaac_interfaces__msg__MissionState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isaac_interfaces__msg__MissionState__Sequence__init(isaac_interfaces__msg__MissionState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__MissionState * data = NULL;

  if (size) {
    data = (isaac_interfaces__msg__MissionState *)allocator.zero_allocate(size, sizeof(isaac_interfaces__msg__MissionState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isaac_interfaces__msg__MissionState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isaac_interfaces__msg__MissionState__fini(&data[i - 1]);
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
isaac_interfaces__msg__MissionState__Sequence__fini(isaac_interfaces__msg__MissionState__Sequence * array)
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
      isaac_interfaces__msg__MissionState__fini(&array->data[i]);
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

isaac_interfaces__msg__MissionState__Sequence *
isaac_interfaces__msg__MissionState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__MissionState__Sequence * array = (isaac_interfaces__msg__MissionState__Sequence *)allocator.allocate(sizeof(isaac_interfaces__msg__MissionState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isaac_interfaces__msg__MissionState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isaac_interfaces__msg__MissionState__Sequence__destroy(isaac_interfaces__msg__MissionState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isaac_interfaces__msg__MissionState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isaac_interfaces__msg__MissionState__Sequence__are_equal(const isaac_interfaces__msg__MissionState__Sequence * lhs, const isaac_interfaces__msg__MissionState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isaac_interfaces__msg__MissionState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isaac_interfaces__msg__MissionState__Sequence__copy(
  const isaac_interfaces__msg__MissionState__Sequence * input,
  isaac_interfaces__msg__MissionState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isaac_interfaces__msg__MissionState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isaac_interfaces__msg__MissionState * data =
      (isaac_interfaces__msg__MissionState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isaac_interfaces__msg__MissionState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isaac_interfaces__msg__MissionState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isaac_interfaces__msg__MissionState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
