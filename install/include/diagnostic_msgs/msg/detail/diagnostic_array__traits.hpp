// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from diagnostic_msgs:msg\DiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__TRAITS_HPP_

#include "diagnostic_msgs/msg/detail/diagnostic_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const diagnostic_msgs::msg::DiagnosticArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status.size() == 0) {
      out << "status: []\n";
    } else {
      out << "status:\n";
      for (auto item : msg.status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const diagnostic_msgs::msg::DiagnosticArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<diagnostic_msgs::msg::DiagnosticArray>()
{
  return "diagnostic_msgs::msg::DiagnosticArray";
}

template<>
inline const char * name<diagnostic_msgs::msg::DiagnosticArray>()
{
  return "diagnostic_msgs/msg/DiagnosticArray";
}

template<>
struct has_fixed_size<diagnostic_msgs::msg::DiagnosticArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::msg::DiagnosticArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::msg::DiagnosticArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__TRAITS_HPP_
