// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\InteractiveMarker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER__TRAITS_HPP_

#include "visualization_msgs/msg/detail/interactive_marker__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'menu_entries'
#include "visualization_msgs/msg/detail/menu_entry__traits.hpp"
// Member 'controls'
#include "visualization_msgs/msg/detail/interactive_marker_control__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const visualization_msgs::msg::InteractiveMarker & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
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

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    value_to_yaml(msg.scale, out);
    out << "\n";
  }

  // member: menu_entries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.menu_entries.size() == 0) {
      out << "menu_entries: []\n";
    } else {
      out << "menu_entries:\n";
      for (auto item : msg.menu_entries) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: controls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.controls.size() == 0) {
      out << "controls: []\n";
    } else {
      out << "controls:\n";
      for (auto item : msg.controls) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const visualization_msgs::msg::InteractiveMarker & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<visualization_msgs::msg::InteractiveMarker>()
{
  return "visualization_msgs::msg::InteractiveMarker";
}

template<>
inline const char * name<visualization_msgs::msg::InteractiveMarker>()
{
  return "visualization_msgs/msg/InteractiveMarker";
}

template<>
struct has_fixed_size<visualization_msgs::msg::InteractiveMarker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::InteractiveMarker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::InteractiveMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER__TRAITS_HPP_
