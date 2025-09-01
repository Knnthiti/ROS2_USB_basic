// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from usb_v1:msg/Joy.idl
// generated code does not contain a copyright notice

#ifndef USB_V1__MSG__DETAIL__JOY__TRAITS_HPP_
#define USB_V1__MSG__DETAIL__JOY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "usb_v1/msg/detail/joy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace usb_v1
{

namespace msg
{

inline void to_flow_style_yaml(
  const Joy & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    if (msg.header.size() == 0) {
      out << "header: []";
    } else {
      out << "header: [";
      size_t pending_items = msg.header.size();
      for (auto item : msg.header) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: move_1
  {
    out << "move_1: ";
    rosidl_generator_traits::value_to_yaml(msg.move_1, out);
    out << ", ";
  }

  // member: move_2
  {
    out << "move_2: ";
    rosidl_generator_traits::value_to_yaml(msg.move_2, out);
    out << ", ";
  }

  // member: move_3
  {
    out << "move_3: ";
    rosidl_generator_traits::value_to_yaml(msg.move_3, out);
    out << ", ";
  }

  // member: move_4
  {
    out << "move_4: ";
    rosidl_generator_traits::value_to_yaml(msg.move_4, out);
    out << ", ";
  }

  // member: set1
  {
    out << "set1: ";
    rosidl_generator_traits::value_to_yaml(msg.set1, out);
    out << ", ";
  }

  // member: set2
  {
    out << "set2: ";
    rosidl_generator_traits::value_to_yaml(msg.set2, out);
    out << ", ";
  }

  // member: attack1
  {
    out << "attack1: ";
    rosidl_generator_traits::value_to_yaml(msg.attack1, out);
    out << ", ";
  }

  // member: attack2
  {
    out << "attack2: ";
    rosidl_generator_traits::value_to_yaml(msg.attack2, out);
    out << ", ";
  }

  // member: attack3
  {
    out << "attack3: ";
    rosidl_generator_traits::value_to_yaml(msg.attack3, out);
    out << ", ";
  }

  // member: attack4
  {
    out << "attack4: ";
    rosidl_generator_traits::value_to_yaml(msg.attack4, out);
    out << ", ";
  }

  // member: stick_lx
  {
    out << "stick_lx: ";
    rosidl_generator_traits::value_to_yaml(msg.stick_lx, out);
    out << ", ";
  }

  // member: stick_ly
  {
    out << "stick_ly: ";
    rosidl_generator_traits::value_to_yaml(msg.stick_ly, out);
    out << ", ";
  }

  // member: stick_rx
  {
    out << "stick_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.stick_rx, out);
    out << ", ";
  }

  // member: stick_ry
  {
    out << "stick_ry: ";
    rosidl_generator_traits::value_to_yaml(msg.stick_ry, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Joy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.header.size() == 0) {
      out << "header: []\n";
    } else {
      out << "header:\n";
      for (auto item : msg.header) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: move_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_1: ";
    rosidl_generator_traits::value_to_yaml(msg.move_1, out);
    out << "\n";
  }

  // member: move_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_2: ";
    rosidl_generator_traits::value_to_yaml(msg.move_2, out);
    out << "\n";
  }

  // member: move_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_3: ";
    rosidl_generator_traits::value_to_yaml(msg.move_3, out);
    out << "\n";
  }

  // member: move_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_4: ";
    rosidl_generator_traits::value_to_yaml(msg.move_4, out);
    out << "\n";
  }

  // member: set1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set1: ";
    rosidl_generator_traits::value_to_yaml(msg.set1, out);
    out << "\n";
  }

  // member: set2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set2: ";
    rosidl_generator_traits::value_to_yaml(msg.set2, out);
    out << "\n";
  }

  // member: attack1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attack1: ";
    rosidl_generator_traits::value_to_yaml(msg.attack1, out);
    out << "\n";
  }

  // member: attack2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attack2: ";
    rosidl_generator_traits::value_to_yaml(msg.attack2, out);
    out << "\n";
  }

  // member: attack3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attack3: ";
    rosidl_generator_traits::value_to_yaml(msg.attack3, out);
    out << "\n";
  }

  // member: attack4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attack4: ";
    rosidl_generator_traits::value_to_yaml(msg.attack4, out);
    out << "\n";
  }

  // member: stick_lx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stick_lx: ";
    rosidl_generator_traits::value_to_yaml(msg.stick_lx, out);
    out << "\n";
  }

  // member: stick_ly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stick_ly: ";
    rosidl_generator_traits::value_to_yaml(msg.stick_ly, out);
    out << "\n";
  }

  // member: stick_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stick_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.stick_rx, out);
    out << "\n";
  }

  // member: stick_ry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stick_ry: ";
    rosidl_generator_traits::value_to_yaml(msg.stick_ry, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Joy & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace usb_v1

namespace rosidl_generator_traits
{

[[deprecated("use usb_v1::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const usb_v1::msg::Joy & msg,
  std::ostream & out, size_t indentation = 0)
{
  usb_v1::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use usb_v1::msg::to_yaml() instead")]]
inline std::string to_yaml(const usb_v1::msg::Joy & msg)
{
  return usb_v1::msg::to_yaml(msg);
}

template<>
inline const char * data_type<usb_v1::msg::Joy>()
{
  return "usb_v1::msg::Joy";
}

template<>
inline const char * name<usb_v1::msg::Joy>()
{
  return "usb_v1/msg/Joy";
}

template<>
struct has_fixed_size<usb_v1::msg::Joy>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<usb_v1::msg::Joy>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<usb_v1::msg::Joy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USB_V1__MSG__DETAIL__JOY__TRAITS_HPP_
