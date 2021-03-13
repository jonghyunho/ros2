// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\LaserScan.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__LASER_SCAN__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__LASER_SCAN__TRAITS_HPP_

#include "sensor_msgs/msg/detail/laser_scan__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::LaserScan & msg,
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

  // member: angle_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_min: ";
    value_to_yaml(msg.angle_min, out);
    out << "\n";
  }

  // member: angle_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_max: ";
    value_to_yaml(msg.angle_max, out);
    out << "\n";
  }

  // member: angle_increment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_increment: ";
    value_to_yaml(msg.angle_increment, out);
    out << "\n";
  }

  // member: time_increment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_increment: ";
    value_to_yaml(msg.time_increment, out);
    out << "\n";
  }

  // member: scan_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_time: ";
    value_to_yaml(msg.scan_time, out);
    out << "\n";
  }

  // member: range_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_min: ";
    value_to_yaml(msg.range_min, out);
    out << "\n";
  }

  // member: range_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_max: ";
    value_to_yaml(msg.range_max, out);
    out << "\n";
  }

  // member: ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ranges.size() == 0) {
      out << "ranges: []\n";
    } else {
      out << "ranges:\n";
      for (auto item : msg.ranges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: intensities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intensities.size() == 0) {
      out << "intensities: []\n";
    } else {
      out << "intensities:\n";
      for (auto item : msg.intensities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::LaserScan & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::LaserScan>()
{
  return "sensor_msgs::msg::LaserScan";
}

template<>
inline const char * name<sensor_msgs::msg::LaserScan>()
{
  return "sensor_msgs/msg/LaserScan";
}

template<>
struct has_fixed_size<sensor_msgs::msg::LaserScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::LaserScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::LaserScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__LASER_SCAN__TRAITS_HPP_
