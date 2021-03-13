// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:msg\ProjectedMapInfo.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__DETAIL__PROJECTED_MAP_INFO__TRAITS_HPP_
#define MAP_MSGS__MSG__DETAIL__PROJECTED_MAP_INFO__TRAITS_HPP_

#include "map_msgs/msg/detail/projected_map_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const map_msgs::msg::ProjectedMapInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: min_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_z: ";
    value_to_yaml(msg.min_z, out);
    out << "\n";
  }

  // member: max_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_z: ";
    value_to_yaml(msg.max_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const map_msgs::msg::ProjectedMapInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<map_msgs::msg::ProjectedMapInfo>()
{
  return "map_msgs::msg::ProjectedMapInfo";
}

template<>
inline const char * name<map_msgs::msg::ProjectedMapInfo>()
{
  return "map_msgs/msg/ProjectedMapInfo";
}

template<>
struct has_fixed_size<map_msgs::msg::ProjectedMapInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_msgs::msg::ProjectedMapInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<map_msgs::msg::ProjectedMapInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__MSG__DETAIL__PROJECTED_MAP_INFO__TRAITS_HPP_
