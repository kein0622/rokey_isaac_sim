// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isaac_interfaces:srv/SaveExplorationMap.idl
// generated code does not contain a copyright notice
#include "isaac_interfaces/srv/detail/save_exploration_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `map_name`
// Member `target_path`
#include "rosidl_runtime_c/string_functions.h"

bool
isaac_interfaces__srv__SaveExplorationMap_Request__init(isaac_interfaces__srv__SaveExplorationMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    isaac_interfaces__srv__SaveExplorationMap_Request__fini(msg);
    return false;
  }
  // target_path
  if (!rosidl_runtime_c__String__init(&msg->target_path)) {
    isaac_interfaces__srv__SaveExplorationMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
isaac_interfaces__srv__SaveExplorationMap_Request__fini(isaac_interfaces__srv__SaveExplorationMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // target_path
  rosidl_runtime_c__String__fini(&msg->target_path);
}

bool
isaac_interfaces__srv__SaveExplorationMap_Request__are_equal(const isaac_interfaces__srv__SaveExplorationMap_Request * lhs, const isaac_interfaces__srv__SaveExplorationMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // target_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_path), &(rhs->target_path)))
  {
    return false;
  }
  return true;
}

bool
isaac_interfaces__srv__SaveExplorationMap_Request__copy(
  const isaac_interfaces__srv__SaveExplorationMap_Request * input,
  isaac_interfaces__srv__SaveExplorationMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // target_path
  if (!rosidl_runtime_c__String__copy(
      &(input->target_path), &(output->target_path)))
  {
    return false;
  }
  return true;
}

isaac_interfaces__srv__SaveExplorationMap_Request *
isaac_interfaces__srv__SaveExplorationMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__srv__SaveExplorationMap_Request * msg = (isaac_interfaces__srv__SaveExplorationMap_Request *)allocator.allocate(sizeof(isaac_interfaces__srv__SaveExplorationMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isaac_interfaces__srv__SaveExplorationMap_Request));
  bool success = isaac_interfaces__srv__SaveExplorationMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isaac_interfaces__srv__SaveExplorationMap_Request__destroy(isaac_interfaces__srv__SaveExplorationMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isaac_interfaces__srv__SaveExplorationMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__init(isaac_interfaces__srv__SaveExplorationMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__srv__SaveExplorationMap_Request * data = NULL;

  if (size) {
    data = (isaac_interfaces__srv__SaveExplorationMap_Request *)allocator.zero_allocate(size, sizeof(isaac_interfaces__srv__SaveExplorationMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isaac_interfaces__srv__SaveExplorationMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isaac_interfaces__srv__SaveExplorationMap_Request__fini(&data[i - 1]);
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
isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__fini(isaac_interfaces__srv__SaveExplorationMap_Request__Sequence * array)
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
      isaac_interfaces__srv__SaveExplorationMap_Request__fini(&array->data[i]);
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

isaac_interfaces__srv__SaveExplorationMap_Request__Sequence *
isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__srv__SaveExplorationMap_Request__Sequence * array = (isaac_interfaces__srv__SaveExplorationMap_Request__Sequence *)allocator.allocate(sizeof(isaac_interfaces__srv__SaveExplorationMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__destroy(isaac_interfaces__srv__SaveExplorationMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__are_equal(const isaac_interfaces__srv__SaveExplorationMap_Request__Sequence * lhs, const isaac_interfaces__srv__SaveExplorationMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isaac_interfaces__srv__SaveExplorationMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isaac_interfaces__srv__SaveExplorationMap_Request__Sequence__copy(
  const isaac_interfaces__srv__SaveExplorationMap_Request__Sequence * input,
  isaac_interfaces__srv__SaveExplorationMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isaac_interfaces__srv__SaveExplorationMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isaac_interfaces__srv__SaveExplorationMap_Request * data =
      (isaac_interfaces__srv__SaveExplorationMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isaac_interfaces__srv__SaveExplorationMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isaac_interfaces__srv__SaveExplorationMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isaac_interfaces__srv__SaveExplorationMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `saved_path`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
isaac_interfaces__srv__SaveExplorationMap_Response__init(isaac_interfaces__srv__SaveExplorationMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // saved_path
  if (!rosidl_runtime_c__String__init(&msg->saved_path)) {
    isaac_interfaces__srv__SaveExplorationMap_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    isaac_interfaces__srv__SaveExplorationMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
isaac_interfaces__srv__SaveExplorationMap_Response__fini(isaac_interfaces__srv__SaveExplorationMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // saved_path
  rosidl_runtime_c__String__fini(&msg->saved_path);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
isaac_interfaces__srv__SaveExplorationMap_Response__are_equal(const isaac_interfaces__srv__SaveExplorationMap_Response * lhs, const isaac_interfaces__srv__SaveExplorationMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // saved_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->saved_path), &(rhs->saved_path)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
isaac_interfaces__srv__SaveExplorationMap_Response__copy(
  const isaac_interfaces__srv__SaveExplorationMap_Response * input,
  isaac_interfaces__srv__SaveExplorationMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // saved_path
  if (!rosidl_runtime_c__String__copy(
      &(input->saved_path), &(output->saved_path)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

isaac_interfaces__srv__SaveExplorationMap_Response *
isaac_interfaces__srv__SaveExplorationMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__srv__SaveExplorationMap_Response * msg = (isaac_interfaces__srv__SaveExplorationMap_Response *)allocator.allocate(sizeof(isaac_interfaces__srv__SaveExplorationMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isaac_interfaces__srv__SaveExplorationMap_Response));
  bool success = isaac_interfaces__srv__SaveExplorationMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isaac_interfaces__srv__SaveExplorationMap_Response__destroy(isaac_interfaces__srv__SaveExplorationMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isaac_interfaces__srv__SaveExplorationMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__init(isaac_interfaces__srv__SaveExplorationMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__srv__SaveExplorationMap_Response * data = NULL;

  if (size) {
    data = (isaac_interfaces__srv__SaveExplorationMap_Response *)allocator.zero_allocate(size, sizeof(isaac_interfaces__srv__SaveExplorationMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isaac_interfaces__srv__SaveExplorationMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isaac_interfaces__srv__SaveExplorationMap_Response__fini(&data[i - 1]);
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
isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__fini(isaac_interfaces__srv__SaveExplorationMap_Response__Sequence * array)
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
      isaac_interfaces__srv__SaveExplorationMap_Response__fini(&array->data[i]);
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

isaac_interfaces__srv__SaveExplorationMap_Response__Sequence *
isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isaac_interfaces__srv__SaveExplorationMap_Response__Sequence * array = (isaac_interfaces__srv__SaveExplorationMap_Response__Sequence *)allocator.allocate(sizeof(isaac_interfaces__srv__SaveExplorationMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__destroy(isaac_interfaces__srv__SaveExplorationMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__are_equal(const isaac_interfaces__srv__SaveExplorationMap_Response__Sequence * lhs, const isaac_interfaces__srv__SaveExplorationMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isaac_interfaces__srv__SaveExplorationMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isaac_interfaces__srv__SaveExplorationMap_Response__Sequence__copy(
  const isaac_interfaces__srv__SaveExplorationMap_Response__Sequence * input,
  isaac_interfaces__srv__SaveExplorationMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isaac_interfaces__srv__SaveExplorationMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isaac_interfaces__srv__SaveExplorationMap_Response * data =
      (isaac_interfaces__srv__SaveExplorationMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isaac_interfaces__srv__SaveExplorationMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isaac_interfaces__srv__SaveExplorationMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isaac_interfaces__srv__SaveExplorationMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
