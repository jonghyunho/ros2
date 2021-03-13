// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rcl_interfaces:msg\Log.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__LOG__TRAITS_HPP_
#define RCL_INTERFACES__MSG__DETAIL__LOG__TRAITS_HPP_

#include "rcl_interfaces/msg/detail/log__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rcl_interfaces::msg::Log & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    value_to_yaml(msg.msg, out);
    out << "\n";
  }

  // member: file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file: ";
    value_to_yaml(msg.file, out);
    out << "\n";
  }

  // member: function
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "function: ";
    value_to_yaml(msg.function, out);
    out << "\n";
  }

  // member: line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "line: ";
    value_to_yaml(msg.line, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rcl_interfaces::msg::Log & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rcl_interfaces::msg::Log>()
{
  return "rcl_interfaces::msg::Log";
}

template<>
inline const char * name<rcl_interfaces::msg::Log>()
{
  return "rcl_interfaces/msg/Log";
}

template<>
struct has_fixed_size<rcl_interfaces::msg::Log>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rcl_interfaces::msg::Log>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rcl_interfaces::msg::Log>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCL_INTERFACES__MSG__DETAIL__LOG__TRAITS_HPP_
