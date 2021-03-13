// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pendulum_msgs:msg\JointCommand.idl
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__DETAIL__JOINT_COMMAND__TRAITS_HPP_
#define PENDULUM_MSGS__MSG__DETAIL__JOINT_COMMAND__TRAITS_HPP_

#include "pendulum_msgs/msg/detail/joint_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pendulum_msgs::msg::JointCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    value_to_yaml(msg.position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pendulum_msgs::msg::JointCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pendulum_msgs::msg::JointCommand>()
{
  return "pendulum_msgs::msg::JointCommand";
}

template<>
inline const char * name<pendulum_msgs::msg::JointCommand>()
{
  return "pendulum_msgs/msg/JointCommand";
}

template<>
struct has_fixed_size<pendulum_msgs::msg::JointCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pendulum_msgs::msg::JointCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pendulum_msgs::msg::JointCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PENDULUM_MSGS__MSG__DETAIL__JOINT_COMMAND__TRAITS_HPP_
