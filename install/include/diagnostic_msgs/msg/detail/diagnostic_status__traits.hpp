// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from diagnostic_msgs:msg\DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__TRAITS_HPP_

#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'values'
#include "diagnostic_msgs/msg/detail/key_value__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const diagnostic_msgs::msg::DiagnosticStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    character_value_to_yaml(msg.level, out);
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: hardware_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_id: ";
    value_to_yaml(msg.hardware_id, out);
    out << "\n";
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const diagnostic_msgs::msg::DiagnosticStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<diagnostic_msgs::msg::DiagnosticStatus>()
{
  return "diagnostic_msgs::msg::DiagnosticStatus";
}

template<>
inline const char * name<diagnostic_msgs::msg::DiagnosticStatus>()
{
  return "diagnostic_msgs/msg/DiagnosticStatus";
}

template<>
struct has_fixed_size<diagnostic_msgs::msg::DiagnosticStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::msg::DiagnosticStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::msg::DiagnosticStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__TRAITS_HPP_
