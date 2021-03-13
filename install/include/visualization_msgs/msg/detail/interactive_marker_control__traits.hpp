// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\InteractiveMarkerControl.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__TRAITS_HPP_

#include "visualization_msgs/msg/detail/interactive_marker_control__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'markers'
#include "visualization_msgs/msg/detail/marker__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const visualization_msgs::msg::InteractiveMarkerControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_yaml(msg.orientation, out, indentation + 2);
  }

  // member: orientation_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_mode: ";
    value_to_yaml(msg.orientation_mode, out);
    out << "\n";
  }

  // member: interaction_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interaction_mode: ";
    value_to_yaml(msg.interaction_mode, out);
    out << "\n";
  }

  // member: always_visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "always_visible: ";
    value_to_yaml(msg.always_visible, out);
    out << "\n";
  }

  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: independent_marker_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "independent_marker_orientation: ";
    value_to_yaml(msg.independent_marker_orientation, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const visualization_msgs::msg::InteractiveMarkerControl & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<visualization_msgs::msg::InteractiveMarkerControl>()
{
  return "visualization_msgs::msg::InteractiveMarkerControl";
}

template<>
inline const char * name<visualization_msgs::msg::InteractiveMarkerControl>()
{
  return "visualization_msgs/msg/InteractiveMarkerControl";
}

template<>
struct has_fixed_size<visualization_msgs::msg::InteractiveMarkerControl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::InteractiveMarkerControl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::InteractiveMarkerControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__TRAITS_HPP_
