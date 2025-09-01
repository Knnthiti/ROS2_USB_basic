// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usb_v1:msg/Joy.idl
// generated code does not contain a copyright notice

#ifndef USB_V1__MSG__DETAIL__JOY__BUILDER_HPP_
#define USB_V1__MSG__DETAIL__JOY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "usb_v1/msg/detail/joy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace usb_v1
{

namespace msg
{

namespace builder
{

class Init_Joy_stick_ry
{
public:
  explicit Init_Joy_stick_ry(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  ::usb_v1::msg::Joy stick_ry(::usb_v1::msg::Joy::_stick_ry_type arg)
  {
    msg_.stick_ry = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_stick_rx
{
public:
  explicit Init_Joy_stick_rx(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_stick_ry stick_rx(::usb_v1::msg::Joy::_stick_rx_type arg)
  {
    msg_.stick_rx = std::move(arg);
    return Init_Joy_stick_ry(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_stick_ly
{
public:
  explicit Init_Joy_stick_ly(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_stick_rx stick_ly(::usb_v1::msg::Joy::_stick_ly_type arg)
  {
    msg_.stick_ly = std::move(arg);
    return Init_Joy_stick_rx(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_stick_lx
{
public:
  explicit Init_Joy_stick_lx(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_stick_ly stick_lx(::usb_v1::msg::Joy::_stick_lx_type arg)
  {
    msg_.stick_lx = std::move(arg);
    return Init_Joy_stick_ly(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_attack4
{
public:
  explicit Init_Joy_attack4(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_stick_lx attack4(::usb_v1::msg::Joy::_attack4_type arg)
  {
    msg_.attack4 = std::move(arg);
    return Init_Joy_stick_lx(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_attack3
{
public:
  explicit Init_Joy_attack3(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_attack4 attack3(::usb_v1::msg::Joy::_attack3_type arg)
  {
    msg_.attack3 = std::move(arg);
    return Init_Joy_attack4(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_attack2
{
public:
  explicit Init_Joy_attack2(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_attack3 attack2(::usb_v1::msg::Joy::_attack2_type arg)
  {
    msg_.attack2 = std::move(arg);
    return Init_Joy_attack3(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_attack1
{
public:
  explicit Init_Joy_attack1(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_attack2 attack1(::usb_v1::msg::Joy::_attack1_type arg)
  {
    msg_.attack1 = std::move(arg);
    return Init_Joy_attack2(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_set2
{
public:
  explicit Init_Joy_set2(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_attack1 set2(::usb_v1::msg::Joy::_set2_type arg)
  {
    msg_.set2 = std::move(arg);
    return Init_Joy_attack1(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_set1
{
public:
  explicit Init_Joy_set1(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_set2 set1(::usb_v1::msg::Joy::_set1_type arg)
  {
    msg_.set1 = std::move(arg);
    return Init_Joy_set2(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_move_4
{
public:
  explicit Init_Joy_move_4(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_set1 move_4(::usb_v1::msg::Joy::_move_4_type arg)
  {
    msg_.move_4 = std::move(arg);
    return Init_Joy_set1(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_move_3
{
public:
  explicit Init_Joy_move_3(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_move_4 move_3(::usb_v1::msg::Joy::_move_3_type arg)
  {
    msg_.move_3 = std::move(arg);
    return Init_Joy_move_4(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_move_2
{
public:
  explicit Init_Joy_move_2(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_move_3 move_2(::usb_v1::msg::Joy::_move_2_type arg)
  {
    msg_.move_2 = std::move(arg);
    return Init_Joy_move_3(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_move_1
{
public:
  explicit Init_Joy_move_1(::usb_v1::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_move_2 move_1(::usb_v1::msg::Joy::_move_1_type arg)
  {
    msg_.move_1 = std::move(arg);
    return Init_Joy_move_2(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

class Init_Joy_header
{
public:
  Init_Joy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joy_move_1 header(::usb_v1::msg::Joy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Joy_move_1(msg_);
  }

private:
  ::usb_v1::msg::Joy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usb_v1::msg::Joy>()
{
  return usb_v1::msg::builder::Init_Joy_header();
}

}  // namespace usb_v1

#endif  // USB_V1__MSG__DETAIL__JOY__BUILDER_HPP_
