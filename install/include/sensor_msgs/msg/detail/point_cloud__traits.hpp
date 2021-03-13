// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\PointCloud.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD__TRAITS_HPP_

#include "sensor_msgs/msg/detail/point_cloud__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'points'
#include "geometry_msgs/msg/detail/point32__traits.hpp"
// Member 'channels'
#include "sensor_msgs/msg/detail/channel_float32__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::PointCloud & msg,
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

  // member: channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channels.size() == 0) {
      out << "channels: []\n";
    } else {
      out << "channels:\n";
      for (auto item : msg.channels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::PointCloud & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::PointCloud>()
{
  return "sensor_msgs::msg::PointCloud";
}

template<>
inline const char * name<sensor_msgs::msg::PointCloud>()
{
  return "sensor_msgs/msg/PointCloud";
}

template<>
struct has_fixed_size<sensor_msgs::msg::PointCloud>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::PointCloud>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::PointCloud>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD__TRAITS_HPP_
