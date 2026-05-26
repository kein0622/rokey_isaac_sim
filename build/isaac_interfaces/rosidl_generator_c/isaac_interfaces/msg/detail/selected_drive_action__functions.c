// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isaac_interfaces:msg/SelectedDriveAction.idl
// generated code does not contain a copyright notice
#include "isaac_interfaces/msg/detail/selected_drive_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action`
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
isaac_interfaces__msg__SelectedDriveAction__init(isaac_interfaces__msg__SelectedDriveAction * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    isaac_interfaces__msg__SelectedDriveAction__fini(msg);
    return false;
  }
  // target_x
  // target_y
  // target_yaw
  // linear_velocity
  // angular_velocity
  // confidence
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    isaac_interfaces__msg__SelectedDriveAction__fini(msg);
    return false;
  }
  return true;
}

void
isaac_interfaces__msg__SelectedDriveAction__fini(isaac_interfaces__msg__SelectedDriveAction * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // target_x
  // target_y
  // target_yaw
  // linear_velocity
  // angular_velocity
  // confidence
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
isaac_interfaces__msg__SelectedDriveAction__are_equal(const isaac_interfaces__msg__SelectedDriveAction * lhs, const isaac_interfaces__msg__SelectedDriveAction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // target_yaw
  if (lhs->target_yaw != rhs->target_yaw) {
    return false;
  }
  // linear_velocity
  if (lhs->linear_velocity != rhs->linear_velocity) {
    return false;
  }
  // angular_velocity
  if (lhs->angular_velocity != rhs->angular_velocity) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
isaac_interfaces__msg__SelectedDriveAction__copy(
  const isaac_interfaces__msg__SelectedDriveAction * input,
  isaac_interfaces__msg__SelectedDriveAction * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // target_yaw
  output->target_yaw = input->target_yaw;
  // linear_velocity
  output->linear_velocity = input->linear_velocity;
  // angular_velocity
  output->angular_velocity = input->angular_velocity;
  // confidence
  output->confidence = input->confidence;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

isaac_interfaces__msg__SelectedDriveAction *
isaac_interfaces__msg__SelectedDriveAction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__SelectedDriveAction * msg = (isaac_interfaces__msg__SelectedDriveAction *)allocator.allocate(sizeof(isaac_interfaces__msg__SelectedDriveAction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isaac_interfaces__msg__SelectedDriveAction));
  bool success = isaac_interfaces__msg__SelectedDriveAction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isaac_interfaces__msg__SelectedDriveAction__destroy(isaac_interfaces__msg__SelectedDriveAction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isaac_interfaces__msg__SelectedDriveAction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isaac_interfaces__msg__SelectedDriveAction__Sequence__init(isaac_interfaces__msg__SelectedDriveAction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__SelectedDriveAction * data = NULL;

  if (size) {
    data = (isaac_interfaces__msg__SelectedDriveAction *)allocator.zero_allocate(size, sizeof(isaac_interfaces__msg__SelectedDriveAction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isaac_interfaces__msg__SelectedDriveAction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isaac_interfaces__msg__SelectedDriveAction__fini(&data[i - 1]);
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
isaac_interfaces__msg__SelectedDriveAction__Sequence__fini(isaac_interfaces__msg__SelectedDriveAction__Sequence * array)
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
      isaac_interfaces__msg__SelectedDriveAction__fini(&array->data[i]);
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

isaac_interfaces__msg__SelectedDriveAction__Sequence *
isaac_interfaces__msg__SelectedDriveAction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__msg__SelectedDriveAction__Sequence * array = (isaac_interfaces__msg__SelectedDriveAction__Sequence *)allocator.allocate(sizeof(isaac_interfaces__msg__SelectedDriveAction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isaac_interfaces__msg__SelectedDriveAction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isaac_interfaces__msg__SelectedDriveAction__Sequence__destroy(isaac_interfaces__msg__SelectedDriveAction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isaac_interfaces__msg__SelectedDriveAction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isaac_interfaces__msg__SelectedDriveAction__Sequence__are_equal(const isaac_interfaces__msg__SelectedDriveAction__Sequence * lhs, const isaac_interfaces__msg__SelectedDriveAction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isaac_interfaces__msg__SelectedDriveAction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isaac_interfaces__msg__SelectedDriveAction__Sequence__copy(
  const isaac_interfaces__msg__SelectedDriveAction__Sequence * input,
  isaac_interfaces__msg__SelectedDriveAction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isaac_interfaces__msg__SelectedDriveAction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isaac_interfaces__msg__SelectedDriveAction * data =
      (isaac_interfaces__msg__SelectedDriveAction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isaac_interfaces__msg__SelectedDriveAction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isaac_interfaces__msg__SelectedDriveAction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isaac_interfaces__msg__SelectedDriveAction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
