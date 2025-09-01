// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usb_v1:msg/Joy.idl
// generated code does not contain a copyright notice
#include "usb_v1/msg/detail/joy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
usb_v1__msg__Joy__init(usb_v1__msg__Joy * msg)
{
  if (!msg) {
    return false;
  }
  // header
  // move_1
  // move_2
  // move_3
  // move_4
  // set1
  // set2
  // attack1
  // attack2
  // attack3
  // attack4
  // stick_lx
  // stick_ly
  // stick_rx
  // stick_ry
  return true;
}

void
usb_v1__msg__Joy__fini(usb_v1__msg__Joy * msg)
{
  if (!msg) {
    return;
  }
  // header
  // move_1
  // move_2
  // move_3
  // move_4
  // set1
  // set2
  // attack1
  // attack2
  // attack3
  // attack4
  // stick_lx
  // stick_ly
  // stick_rx
  // stick_ry
}

bool
usb_v1__msg__Joy__are_equal(const usb_v1__msg__Joy * lhs, const usb_v1__msg__Joy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->header[i] != rhs->header[i]) {
      return false;
    }
  }
  // move_1
  if (lhs->move_1 != rhs->move_1) {
    return false;
  }
  // move_2
  if (lhs->move_2 != rhs->move_2) {
    return false;
  }
  // move_3
  if (lhs->move_3 != rhs->move_3) {
    return false;
  }
  // move_4
  if (lhs->move_4 != rhs->move_4) {
    return false;
  }
  // set1
  if (lhs->set1 != rhs->set1) {
    return false;
  }
  // set2
  if (lhs->set2 != rhs->set2) {
    return false;
  }
  // attack1
  if (lhs->attack1 != rhs->attack1) {
    return false;
  }
  // attack2
  if (lhs->attack2 != rhs->attack2) {
    return false;
  }
  // attack3
  if (lhs->attack3 != rhs->attack3) {
    return false;
  }
  // attack4
  if (lhs->attack4 != rhs->attack4) {
    return false;
  }
  // stick_lx
  if (lhs->stick_lx != rhs->stick_lx) {
    return false;
  }
  // stick_ly
  if (lhs->stick_ly != rhs->stick_ly) {
    return false;
  }
  // stick_rx
  if (lhs->stick_rx != rhs->stick_rx) {
    return false;
  }
  // stick_ry
  if (lhs->stick_ry != rhs->stick_ry) {
    return false;
  }
  return true;
}

bool
usb_v1__msg__Joy__copy(
  const usb_v1__msg__Joy * input,
  usb_v1__msg__Joy * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  for (size_t i = 0; i < 2; ++i) {
    output->header[i] = input->header[i];
  }
  // move_1
  output->move_1 = input->move_1;
  // move_2
  output->move_2 = input->move_2;
  // move_3
  output->move_3 = input->move_3;
  // move_4
  output->move_4 = input->move_4;
  // set1
  output->set1 = input->set1;
  // set2
  output->set2 = input->set2;
  // attack1
  output->attack1 = input->attack1;
  // attack2
  output->attack2 = input->attack2;
  // attack3
  output->attack3 = input->attack3;
  // attack4
  output->attack4 = input->attack4;
  // stick_lx
  output->stick_lx = input->stick_lx;
  // stick_ly
  output->stick_ly = input->stick_ly;
  // stick_rx
  output->stick_rx = input->stick_rx;
  // stick_ry
  output->stick_ry = input->stick_ry;
  return true;
}

usb_v1__msg__Joy *
usb_v1__msg__Joy__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usb_v1__msg__Joy * msg = (usb_v1__msg__Joy *)allocator.allocate(sizeof(usb_v1__msg__Joy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usb_v1__msg__Joy));
  bool success = usb_v1__msg__Joy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
usb_v1__msg__Joy__destroy(usb_v1__msg__Joy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    usb_v1__msg__Joy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
usb_v1__msg__Joy__Sequence__init(usb_v1__msg__Joy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usb_v1__msg__Joy * data = NULL;

  if (size) {
    data = (usb_v1__msg__Joy *)allocator.zero_allocate(size, sizeof(usb_v1__msg__Joy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usb_v1__msg__Joy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usb_v1__msg__Joy__fini(&data[i - 1]);
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
usb_v1__msg__Joy__Sequence__fini(usb_v1__msg__Joy__Sequence * array)
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
      usb_v1__msg__Joy__fini(&array->data[i]);
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

usb_v1__msg__Joy__Sequence *
usb_v1__msg__Joy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usb_v1__msg__Joy__Sequence * array = (usb_v1__msg__Joy__Sequence *)allocator.allocate(sizeof(usb_v1__msg__Joy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = usb_v1__msg__Joy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
usb_v1__msg__Joy__Sequence__destroy(usb_v1__msg__Joy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    usb_v1__msg__Joy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
usb_v1__msg__Joy__Sequence__are_equal(const usb_v1__msg__Joy__Sequence * lhs, const usb_v1__msg__Joy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!usb_v1__msg__Joy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
usb_v1__msg__Joy__Sequence__copy(
  const usb_v1__msg__Joy__Sequence * input,
  usb_v1__msg__Joy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(usb_v1__msg__Joy);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    usb_v1__msg__Joy * data =
      (usb_v1__msg__Joy *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!usb_v1__msg__Joy__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          usb_v1__msg__Joy__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!usb_v1__msg__Joy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
