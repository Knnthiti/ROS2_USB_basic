// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from usb_v1:msg/Joy.idl
// generated code does not contain a copyright notice
#include "usb_v1/msg/detail/joy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "usb_v1/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "usb_v1/msg/detail/joy__struct.h"
#include "usb_v1/msg/detail/joy__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Joy__ros_msg_type = usb_v1__msg__Joy;

static bool _Joy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Joy__ros_msg_type * ros_message = static_cast<const _Joy__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    size_t size = 2;
    auto array_ptr = ros_message->header;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: move_1
  {
    cdr << ros_message->move_1;
  }

  // Field name: move_2
  {
    cdr << ros_message->move_2;
  }

  // Field name: move_3
  {
    cdr << ros_message->move_3;
  }

  // Field name: move_4
  {
    cdr << ros_message->move_4;
  }

  // Field name: set1
  {
    cdr << ros_message->set1;
  }

  // Field name: set2
  {
    cdr << ros_message->set2;
  }

  // Field name: attack1
  {
    cdr << ros_message->attack1;
  }

  // Field name: attack2
  {
    cdr << ros_message->attack2;
  }

  // Field name: attack3
  {
    cdr << ros_message->attack3;
  }

  // Field name: attack4
  {
    cdr << ros_message->attack4;
  }

  // Field name: stick_lx
  {
    cdr << ros_message->stick_lx;
  }

  // Field name: stick_ly
  {
    cdr << ros_message->stick_ly;
  }

  // Field name: stick_rx
  {
    cdr << ros_message->stick_rx;
  }

  // Field name: stick_ry
  {
    cdr << ros_message->stick_ry;
  }

  return true;
}

static bool _Joy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Joy__ros_msg_type * ros_message = static_cast<_Joy__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    size_t size = 2;
    auto array_ptr = ros_message->header;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: move_1
  {
    cdr >> ros_message->move_1;
  }

  // Field name: move_2
  {
    cdr >> ros_message->move_2;
  }

  // Field name: move_3
  {
    cdr >> ros_message->move_3;
  }

  // Field name: move_4
  {
    cdr >> ros_message->move_4;
  }

  // Field name: set1
  {
    cdr >> ros_message->set1;
  }

  // Field name: set2
  {
    cdr >> ros_message->set2;
  }

  // Field name: attack1
  {
    cdr >> ros_message->attack1;
  }

  // Field name: attack2
  {
    cdr >> ros_message->attack2;
  }

  // Field name: attack3
  {
    cdr >> ros_message->attack3;
  }

  // Field name: attack4
  {
    cdr >> ros_message->attack4;
  }

  // Field name: stick_lx
  {
    cdr >> ros_message->stick_lx;
  }

  // Field name: stick_ly
  {
    cdr >> ros_message->stick_ly;
  }

  // Field name: stick_rx
  {
    cdr >> ros_message->stick_rx;
  }

  // Field name: stick_ry
  {
    cdr >> ros_message->stick_ry;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_usb_v1
size_t get_serialized_size_usb_v1__msg__Joy(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Joy__ros_msg_type * ros_message = static_cast<const _Joy__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->header;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name move_1
  {
    size_t item_size = sizeof(ros_message->move_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name move_2
  {
    size_t item_size = sizeof(ros_message->move_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name move_3
  {
    size_t item_size = sizeof(ros_message->move_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name move_4
  {
    size_t item_size = sizeof(ros_message->move_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set1
  {
    size_t item_size = sizeof(ros_message->set1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set2
  {
    size_t item_size = sizeof(ros_message->set2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attack1
  {
    size_t item_size = sizeof(ros_message->attack1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attack2
  {
    size_t item_size = sizeof(ros_message->attack2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attack3
  {
    size_t item_size = sizeof(ros_message->attack3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attack4
  {
    size_t item_size = sizeof(ros_message->attack4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stick_lx
  {
    size_t item_size = sizeof(ros_message->stick_lx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stick_ly
  {
    size_t item_size = sizeof(ros_message->stick_ly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stick_rx
  {
    size_t item_size = sizeof(ros_message->stick_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stick_ry
  {
    size_t item_size = sizeof(ros_message->stick_ry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Joy__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_usb_v1__msg__Joy(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_usb_v1
size_t max_serialized_size_usb_v1__msg__Joy(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: move_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: move_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: move_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: move_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: set1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: set2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attack1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attack2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attack3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attack4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stick_lx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stick_ly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stick_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stick_ry
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = usb_v1__msg__Joy;
    is_plain =
      (
      offsetof(DataType, stick_ry) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Joy__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_usb_v1__msg__Joy(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Joy = {
  "usb_v1::msg",
  "Joy",
  _Joy__cdr_serialize,
  _Joy__cdr_deserialize,
  _Joy__get_serialized_size,
  _Joy__max_serialized_size
};

static rosidl_message_type_support_t _Joy__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Joy,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, usb_v1, msg, Joy)() {
  return &_Joy__type_support;
}

#if defined(__cplusplus)
}
#endif
