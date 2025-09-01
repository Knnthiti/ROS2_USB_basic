// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from usb_v1:msg/Joy.idl
// generated code does not contain a copyright notice
#include "usb_v1/msg/detail/joy__rosidl_typesupport_fastrtps_cpp.hpp"
#include "usb_v1/msg/detail/joy__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace usb_v1
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usb_v1
cdr_serialize(
  const usb_v1::msg::Joy & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  {
    cdr << ros_message.header;
  }
  // Member: move_1
  cdr << ros_message.move_1;
  // Member: move_2
  cdr << ros_message.move_2;
  // Member: move_3
  cdr << ros_message.move_3;
  // Member: move_4
  cdr << ros_message.move_4;
  // Member: set1
  cdr << ros_message.set1;
  // Member: set2
  cdr << ros_message.set2;
  // Member: attack1
  cdr << ros_message.attack1;
  // Member: attack2
  cdr << ros_message.attack2;
  // Member: attack3
  cdr << ros_message.attack3;
  // Member: attack4
  cdr << ros_message.attack4;
  // Member: stick_lx
  cdr << ros_message.stick_lx;
  // Member: stick_ly
  cdr << ros_message.stick_ly;
  // Member: stick_rx
  cdr << ros_message.stick_rx;
  // Member: stick_ry
  cdr << ros_message.stick_ry;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usb_v1
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  usb_v1::msg::Joy & ros_message)
{
  // Member: header
  {
    cdr >> ros_message.header;
  }

  // Member: move_1
  cdr >> ros_message.move_1;

  // Member: move_2
  cdr >> ros_message.move_2;

  // Member: move_3
  cdr >> ros_message.move_3;

  // Member: move_4
  cdr >> ros_message.move_4;

  // Member: set1
  cdr >> ros_message.set1;

  // Member: set2
  cdr >> ros_message.set2;

  // Member: attack1
  cdr >> ros_message.attack1;

  // Member: attack2
  cdr >> ros_message.attack2;

  // Member: attack3
  cdr >> ros_message.attack3;

  // Member: attack4
  cdr >> ros_message.attack4;

  // Member: stick_lx
  cdr >> ros_message.stick_lx;

  // Member: stick_ly
  cdr >> ros_message.stick_ly;

  // Member: stick_rx
  cdr >> ros_message.stick_rx;

  // Member: stick_ry
  cdr >> ros_message.stick_ry;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usb_v1
get_serialized_size(
  const usb_v1::msg::Joy & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.header[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: move_1
  {
    size_t item_size = sizeof(ros_message.move_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: move_2
  {
    size_t item_size = sizeof(ros_message.move_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: move_3
  {
    size_t item_size = sizeof(ros_message.move_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: move_4
  {
    size_t item_size = sizeof(ros_message.move_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set1
  {
    size_t item_size = sizeof(ros_message.set1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set2
  {
    size_t item_size = sizeof(ros_message.set2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attack1
  {
    size_t item_size = sizeof(ros_message.attack1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attack2
  {
    size_t item_size = sizeof(ros_message.attack2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attack3
  {
    size_t item_size = sizeof(ros_message.attack3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attack4
  {
    size_t item_size = sizeof(ros_message.attack4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stick_lx
  {
    size_t item_size = sizeof(ros_message.stick_lx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stick_ly
  {
    size_t item_size = sizeof(ros_message.stick_ly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stick_rx
  {
    size_t item_size = sizeof(ros_message.stick_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stick_ry
  {
    size_t item_size = sizeof(ros_message.stick_ry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usb_v1
max_serialized_size_Joy(
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


  // Member: header
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: move_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: move_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: move_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: move_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: set1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: set2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attack1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attack2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attack3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attack4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stick_lx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stick_ly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stick_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stick_ry
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
    using DataType = usb_v1::msg::Joy;
    is_plain =
      (
      offsetof(DataType, stick_ry) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Joy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const usb_v1::msg::Joy *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Joy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<usb_v1::msg::Joy *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Joy__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const usb_v1::msg::Joy *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Joy__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Joy(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Joy__callbacks = {
  "usb_v1::msg",
  "Joy",
  _Joy__cdr_serialize,
  _Joy__cdr_deserialize,
  _Joy__get_serialized_size,
  _Joy__max_serialized_size
};

static rosidl_message_type_support_t _Joy__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Joy__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace usb_v1

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_usb_v1
const rosidl_message_type_support_t *
get_message_type_support_handle<usb_v1::msg::Joy>()
{
  return &usb_v1::msg::typesupport_fastrtps_cpp::_Joy__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, usb_v1, msg, Joy)() {
  return &usb_v1::msg::typesupport_fastrtps_cpp::_Joy__handle;
}

#ifdef __cplusplus
}
#endif
