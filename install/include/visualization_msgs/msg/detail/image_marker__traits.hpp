// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg\ImageMarker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__TRAITS_HPP_

#include "visualization_msgs/msg/detail/image_marker__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
// Member 'points'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'outline_color'
// Member 'fill_color'
// Member 'outline_colors'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const visualization_msgs::msg::ImageMarker & msg,
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

  // member: ns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ns: ";
    value_to_yaml(msg.ns, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
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

  // member: outline_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outline_color:\n";
    to_yaml(msg.outline_color, out, indentation + 2);
  }

  // member: filled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filled: ";
    value_to_yaml(msg.filled, out);
    out << "\n";
  }

  // member: fill_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fill_color:\n";
    to_yaml(msg.fill_color, out, indentation + 2);
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime:\n";
    to_yaml(msg.lifetime, out, indentation + 2);
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: outline_colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.outline_colors.size() == 0) {
      out << "outline_colors: []\n";
    } else {
      out << "outline_colors:\n";
      for (auto item : msg.outline_colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const visualization_msgs::msg::ImageMarker & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<visualization_msgs::msg::ImageMarker>()
{
  return "visualization_msgs::msg::ImageMarker";
}

template<>
inline const char * name<visualization_msgs::msg::ImageMarker>()
{
  return "visualization_msgs/msg/ImageMarker";
}

template<>
struct has_fixed_size<visualization_msgs::msg::ImageMarker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::ImageMarker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::ImageMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__TRAITS_HPP_
