// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:msg\ProjectedMap.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__DETAIL__PROJECTED_MAP__TRAITS_HPP_
#define MAP_MSGS__MSG__DETAIL__PROJECTED_MAP__TRAITS_HPP_

#include "map_msgs/msg/detail/projected_map__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const map_msgs::msg::ProjectedMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map:\n";
    to_yaml(msg.map, out, indentation + 2);
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

inline std::string to_yaml(const map_msgs::msg::ProjectedMap & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<map_msgs::msg::ProjectedMap>()
{
  return "map_msgs::msg::ProjectedMap";
}

template<>
inline const char * name<map_msgs::msg::ProjectedMap>()
{
  return "map_msgs/msg/ProjectedMap";
}

template<>
struct has_fixed_size<map_msgs::msg::ProjectedMap>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<map_msgs::msg::ProjectedMap>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<map_msgs::msg::ProjectedMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__MSG__DETAIL__PROJECTED_MAP__TRAITS_HPP_
