// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lesson_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lesson_interfaces/msg/num.hpp"


#ifndef LESSON_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define LESSON_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lesson_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lesson_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lesson_interfaces::msg::Num num(::lesson_interfaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lesson_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lesson_interfaces::msg::Num>()
{
  return lesson_interfaces::msg::builder::Init_Num_num();
}

}  // namespace lesson_interfaces

#endif  // LESSON_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
