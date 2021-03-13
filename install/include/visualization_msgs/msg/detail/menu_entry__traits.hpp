// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\MenuEntry.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__TRAITS_HPP_

#include "visualization_msgs/msg/detail/menu_entry__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const visualization_msgs::msg::MenuEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: parent_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_id: ";
    value_to_yaml(msg.parent_id, out);
    out << "\n";
  }

  // member: title
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "title: ";
    value_to_yaml(msg.title, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: command_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_type: ";
    value_to_yaml(msg.command_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const visualization_msgs::msg::MenuEntry & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<visualization_msgs::msg::MenuEntry>()
{
  return "visualization_msgs::msg::MenuEntry";
}

template<>
inline const char * name<visualization_msgs::msg::MenuEntry>()
{
  return "visualization_msgs/msg/MenuEntry";
}

template<>
struct has_fixed_size<visualization_msgs::msg::MenuEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::MenuEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::MenuEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__TRAITS_HPP_
