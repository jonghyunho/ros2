// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\PointCloud2.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__TRAITS_HPP_

#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'fields'
#include "sensor_msgs/msg/detail/point_field__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::PointCloud2 & msg,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
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

  // member: fields
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fields.size() == 0) {
      out << "fields: []\n";
    } else {
      out << "fields:\n";
      for (auto item : msg.fields) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_bigendian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_bigendian: ";
    value_to_yaml(msg.is_bigendian, out);
    out << "\n";
  }

  // member: point_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_step: ";
    value_to_yaml(msg.point_step, out);
    out << "\n";
  }

  // member: row_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "row_step: ";
    value_to_yaml(msg.row_step, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_dense
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_dense: ";
    value_to_yaml(msg.is_dense, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::PointCloud2 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::PointCloud2>()
{
  return "sensor_msgs::msg::PointCloud2";
}

template<>
inline const char * name<sensor_msgs::msg::PointCloud2>()
{
  return "sensor_msgs/msg/PointCloud2";
}

template<>
struct has_fixed_size<sensor_msgs::msg::PointCloud2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::PointCloud2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::PointCloud2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__TRAITS_HPP_
