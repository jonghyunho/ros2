// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\InteractiveMarkerFeedback.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_FEEDBACK__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_FEEDBACK__TRAITS_HPP_

#include "visualization_msgs/msg/detail/interactive_marker_feedback__struct.hpp"
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
// Member 'mouse_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const visualization_msgs::msg::InteractiveMarkerFeedback & msg,
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

  // member: client_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_id: ";
    value_to_yaml(msg.client_id, out);
    out << "\n";
  }

  // member: marker_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_name: ";
    value_to_yaml(msg.marker_name, out);
    out << "\n";
  }

  // member: control_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_name: ";
    value_to_yaml(msg.control_name, out);
    out << "\n";
  }

  // member: event_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_type: ";
    value_to_yaml(msg.event_type, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: menu_entry_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "menu_entry_id: ";
    value_to_yaml(msg.menu_entry_id, out);
    out << "\n";
  }

  // member: mouse_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mouse_point:\n";
    to_yaml(msg.mouse_point, out, indentation + 2);
  }

  // member: mouse_point_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mouse_point_valid: ";
    value_to_yaml(msg.mouse_point_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const visualization_msgs::msg::InteractiveMarkerFeedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<visualization_msgs::msg::InteractiveMarkerFeedback>()
{
  return "visualization_msgs::msg::InteractiveMarkerFeedback";
}

template<>
inline const char * name<visualization_msgs::msg::InteractiveMarkerFeedback>()
{
  return "visualization_msgs/msg/InteractiveMarkerFeedback";
}

template<>
struct has_fixed_size<visualization_msgs::msg::InteractiveMarkerFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::InteractiveMarkerFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::InteractiveMarkerFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_FEEDBACK__TRAITS_HPP_
