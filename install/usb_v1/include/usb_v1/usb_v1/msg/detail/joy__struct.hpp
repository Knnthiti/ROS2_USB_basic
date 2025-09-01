// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usb_v1:msg/Joy.idl
// generated code does not contain a copyright notice

#ifndef USB_V1__MSG__DETAIL__JOY__STRUCT_HPP_
#define USB_V1__MSG__DETAIL__JOY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__usb_v1__msg__Joy __attribute__((deprecated))
#else
# define DEPRECATED__usb_v1__msg__Joy __declspec(deprecated)
#endif

namespace usb_v1
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Joy_
{
  using Type = Joy_<ContainerAllocator>;

  explicit Joy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->header.begin(), this->header.end(), 0);
      this->move_1 = 0;
      this->move_2 = 0;
      this->move_3 = 0;
      this->move_4 = 0;
      this->set1 = 0;
      this->set2 = 0;
      this->attack1 = 0;
      this->attack2 = 0;
      this->attack3 = 0;
      this->attack4 = 0;
      this->stick_lx = 0;
      this->stick_ly = 0;
      this->stick_rx = 0;
      this->stick_ry = 0;
    }
  }

  explicit Joy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->header.begin(), this->header.end(), 0);
      this->move_1 = 0;
      this->move_2 = 0;
      this->move_3 = 0;
      this->move_4 = 0;
      this->set1 = 0;
      this->set2 = 0;
      this->attack1 = 0;
      this->attack2 = 0;
      this->attack3 = 0;
      this->attack4 = 0;
      this->stick_lx = 0;
      this->stick_ly = 0;
      this->stick_rx = 0;
      this->stick_ry = 0;
    }
  }

  // field types and members
  using _header_type =
    std::array<uint8_t, 2>;
  _header_type header;
  using _move_1_type =
    uint8_t;
  _move_1_type move_1;
  using _move_2_type =
    uint8_t;
  _move_2_type move_2;
  using _move_3_type =
    uint8_t;
  _move_3_type move_3;
  using _move_4_type =
    uint8_t;
  _move_4_type move_4;
  using _set1_type =
    uint8_t;
  _set1_type set1;
  using _set2_type =
    uint8_t;
  _set2_type set2;
  using _attack1_type =
    uint8_t;
  _attack1_type attack1;
  using _attack2_type =
    uint8_t;
  _attack2_type attack2;
  using _attack3_type =
    uint8_t;
  _attack3_type attack3;
  using _attack4_type =
    uint8_t;
  _attack4_type attack4;
  using _stick_lx_type =
    int8_t;
  _stick_lx_type stick_lx;
  using _stick_ly_type =
    int8_t;
  _stick_ly_type stick_ly;
  using _stick_rx_type =
    int8_t;
  _stick_rx_type stick_rx;
  using _stick_ry_type =
    int8_t;
  _stick_ry_type stick_ry;

  // setters for named parameter idiom
  Type & set__header(
    const std::array<uint8_t, 2> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__move_1(
    const uint8_t & _arg)
  {
    this->move_1 = _arg;
    return *this;
  }
  Type & set__move_2(
    const uint8_t & _arg)
  {
    this->move_2 = _arg;
    return *this;
  }
  Type & set__move_3(
    const uint8_t & _arg)
  {
    this->move_3 = _arg;
    return *this;
  }
  Type & set__move_4(
    const uint8_t & _arg)
  {
    this->move_4 = _arg;
    return *this;
  }
  Type & set__set1(
    const uint8_t & _arg)
  {
    this->set1 = _arg;
    return *this;
  }
  Type & set__set2(
    const uint8_t & _arg)
  {
    this->set2 = _arg;
    return *this;
  }
  Type & set__attack1(
    const uint8_t & _arg)
  {
    this->attack1 = _arg;
    return *this;
  }
  Type & set__attack2(
    const uint8_t & _arg)
  {
    this->attack2 = _arg;
    return *this;
  }
  Type & set__attack3(
    const uint8_t & _arg)
  {
    this->attack3 = _arg;
    return *this;
  }
  Type & set__attack4(
    const uint8_t & _arg)
  {
    this->attack4 = _arg;
    return *this;
  }
  Type & set__stick_lx(
    const int8_t & _arg)
  {
    this->stick_lx = _arg;
    return *this;
  }
  Type & set__stick_ly(
    const int8_t & _arg)
  {
    this->stick_ly = _arg;
    return *this;
  }
  Type & set__stick_rx(
    const int8_t & _arg)
  {
    this->stick_rx = _arg;
    return *this;
  }
  Type & set__stick_ry(
    const int8_t & _arg)
  {
    this->stick_ry = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usb_v1::msg::Joy_<ContainerAllocator> *;
  using ConstRawPtr =
    const usb_v1::msg::Joy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usb_v1::msg::Joy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usb_v1::msg::Joy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usb_v1::msg::Joy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usb_v1::msg::Joy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usb_v1::msg::Joy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usb_v1::msg::Joy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usb_v1::msg::Joy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usb_v1::msg::Joy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usb_v1__msg__Joy
    std::shared_ptr<usb_v1::msg::Joy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usb_v1__msg__Joy
    std::shared_ptr<usb_v1::msg::Joy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Joy_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->move_1 != other.move_1) {
      return false;
    }
    if (this->move_2 != other.move_2) {
      return false;
    }
    if (this->move_3 != other.move_3) {
      return false;
    }
    if (this->move_4 != other.move_4) {
      return false;
    }
    if (this->set1 != other.set1) {
      return false;
    }
    if (this->set2 != other.set2) {
      return false;
    }
    if (this->attack1 != other.attack1) {
      return false;
    }
    if (this->attack2 != other.attack2) {
      return false;
    }
    if (this->attack3 != other.attack3) {
      return false;
    }
    if (this->attack4 != other.attack4) {
      return false;
    }
    if (this->stick_lx != other.stick_lx) {
      return false;
    }
    if (this->stick_ly != other.stick_ly) {
      return false;
    }
    if (this->stick_rx != other.stick_rx) {
      return false;
    }
    if (this->stick_ry != other.stick_ry) {
      return false;
    }
    return true;
  }
  bool operator!=(const Joy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Joy_

// alias to use template instance with default allocator
using Joy =
  usb_v1::msg::Joy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usb_v1

#endif  // USB_V1__MSG__DETAIL__JOY__STRUCT_HPP_
