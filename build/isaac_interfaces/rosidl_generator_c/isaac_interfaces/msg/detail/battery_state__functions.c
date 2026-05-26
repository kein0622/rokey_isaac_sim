// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isaac_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "isaac_interfaces/msg/detail/battery_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

bool
isaac_interfaces__msg__BatteryState__init(isaac_interfaces__msg__BatteryState * msg)
{
  if (!msg) {
    return false;
  }
  // percentage
  // is_charging
  // is_low
  // is_critical
  // voltage
  // current
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    isaac_interfaces__msg__BatteryState__fini(msg);
    return false;
  }
  return true;
}

void
isaac_interfaces__msg__BatteryState__fini(isaac_interfaces__msg__BatteryState * msg)
{
  if (!msg) {
    return;
  }
  // percentage
  // is_charging
  // is_low
  // is_critical
  // voltage
  // current
  // source
  rosidl_runtime_c__String__fini(&msg->source);
}

bool
isaac_interfaces__msg__BatteryState__are_equal(const isaac_interfaces__msg__BatteryState * lhs, const isaac_interfaces__msg__BatteryState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // percentage
  if (lhs->percentage != rhs->percentage) {
    return false;
  }
  // is_charging
  if (lhs->is_charging != rhs->is_charging) {
    return false;
  }
  // is_low
  if (lhs->is_low != rhs->is_low) {
    return false;
  }
  // is_critical
  if (lhs->is_critical != rhs->is_critical) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  return true;
}

bool
isaac_interfaces__msg__BatteryState__copy(
  const isaac_interfaces__msg__BatteryState * input,
  isaac_interfaces__msg__BatteryState * output)
{
  if (!input || !output) {
    return false;
  }
  // percentage
  output->percentage = input->percentage;
  // is_charging
  output->is_charging = input->is_charging;
  // is_low
  output->is_low = input->is_low;
  // is_critical
  output->is_critical = input->is_critical;
  // voltage
  output->voltage = input->voltage;
  // current
  output->current = input->current;
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  return true;
}

isaac_interfaces__msg__BatteryState *
isaac_interfaces__msg__BatteryState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__BatteryState * msg = (isaac_interfaces__msg__BatteryState *)allocator.allocate(sizeof(isaac_interfaces__msg__BatteryState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isaac_interfaces__msg__BatteryState));
  bool success = isaac_interfaces__msg__BatteryState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isaac_interfaces__msg__BatteryState__destroy(isaac_interfaces__msg__BatteryState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isaac_interfaces__msg__BatteryState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isaac_interfaces__msg__BatteryState__Sequence__init(isaac_interfaces__msg__BatteryState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__BatteryState * data = NULL;

  if (size) {
    data = (isaac_interfaces__msg__BatteryState *)allocator.zero_allocate(size, sizeof(isaac_interfaces__msg__BatteryState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isaac_interfaces__msg__BatteryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isaac_interfaces__msg__BatteryState__fini(&data[i - 1]);
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
isaac_interfaces__msg__BatteryState__Sequence__fini(isaac_interfaces__msg__BatteryState__Sequence * array)
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
      isaac_interfaces__msg__BatteryState__fini(&array->data[i]);
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

isaac_interfaces__msg__BatteryState__Sequence *
isaac_interfaces__msg__BatteryState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__BatteryState__Sequence * array = (isaac_interfaces__msg__BatteryState__Sequence *)allocator.allocate(sizeof(isaac_interfaces__msg__BatteryState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isaac_interfaces__msg__BatteryState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isaac_interfaces__msg__BatteryState__Sequence__destroy(isaac_interfaces__msg__BatteryState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isaac_interfaces__msg__BatteryState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isaac_interfaces__msg__BatteryState__Sequence__are_equal(const isaac_interfaces__msg__BatteryState__Sequence * lhs, const isaac_interfaces__msg__BatteryState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isaac_interfaces__msg__BatteryState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isaac_interfaces__msg__BatteryState__Sequence__copy(
  const isaac_interfaces__msg__BatteryState__Sequence * input,
  isaac_interfaces__msg__BatteryState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isaac_interfaces__msg__BatteryState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isaac_interfaces__msg__BatteryState * data =
      (isaac_interfaces__msg__BatteryState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isaac_interfaces__msg__BatteryState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isaac_interfaces__msg__BatteryState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isaac_interfaces__msg__BatteryState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
