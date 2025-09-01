// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usb_v1:msg/Joy.idl
// generated code does not contain a copyright notice

#ifndef USB_V1__MSG__DETAIL__JOY__STRUCT_H_
#define USB_V1__MSG__DETAIL__JOY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Joy in the package usb_v1.
typedef struct usb_v1__msg__Joy
{
  uint8_t header[2];
  uint8_t move_1;
  uint8_t move_2;
  uint8_t move_3;
  uint8_t move_4;
  uint8_t set1;
  uint8_t set2;
  uint8_t attack1;
  uint8_t attack2;
  uint8_t attack3;
  uint8_t attack4;
  int8_t stick_lx;
  int8_t stick_ly;
  int8_t stick_rx;
  int8_t stick_ry;
} usb_v1__msg__Joy;

// Struct for a sequence of usb_v1__msg__Joy.
typedef struct usb_v1__msg__Joy__Sequence
{
  usb_v1__msg__Joy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usb_v1__msg__Joy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USB_V1__MSG__DETAIL__JOY__STRUCT_H_
