// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:srv\GetPointMapROI.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__GET_POINT_MAP_ROI__TRAITS_HPP_
#define MAP_MSGS__SRV__DETAIL__GET_POINT_MAP_ROI__TRAITS_HPP_

#include "map_msgs/srv/detail/get_point_map_roi__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const map_msgs::srv::GetPointMapROI_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: l_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_x: ";
    value_to_yaml(msg.l_x, out);
    out << "\n";
  }

  // member: l_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_y: ";
    value_to_yaml(msg.l_y, out);
    out << "\n";
  }

  // member: l_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_z: ";
    value_to_yaml(msg.l_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const map_msgs::srv::GetPointMapROI_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<map_msgs::srv::GetPointMapROI_Request>()
{
  return "map_msgs::srv::GetPointMapROI_Request";
}

template<>
inline const char * name<map_msgs::srv::GetPointMapROI_Request>()
{
  return "map_msgs/srv/GetPointMapROI_Request";
}

template<>
struct has_fixed_size<map_msgs::srv::GetPointMapROI_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMapROI_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<map_msgs::srv::GetPointMapROI_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'sub_map'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const map_msgs::srv::GetPointMapROI_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sub_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_map:\n";
    to_yaml(msg.sub_map, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const map_msgs::srv::GetPointMapROI_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<map_msgs::srv::GetPointMapROI_Response>()
{
  return "map_msgs::srv::GetPointMapROI_Response";
}

template<>
inline const char * name<map_msgs::srv::GetPointMapROI_Response>()
{
  return "map_msgs/srv/GetPointMapROI_Response";
}

template<>
struct has_fixed_size<map_msgs::srv::GetPointMapROI_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMapROI_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<map_msgs::srv::GetPointMapROI_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::GetPointMapROI>()
{
  return "map_msgs::srv::GetPointMapROI";
}

template<>
inline const char * name<map_msgs::srv::GetPointMapROI>()
{
  return "map_msgs/srv/GetPointMapROI";
}

template<>
struct has_fixed_size<map_msgs::srv::GetPointMapROI>
  : std::integral_constant<
    bool,
    has_fixed_size<map_msgs::srv::GetPointMapROI_Request>::value &&
    has_fixed_size<map_msgs::srv::GetPointMapROI_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_msgs::srv::GetPointMapROI>
  : std::integral_constant<
    bool,
    has_bounded_size<map_msgs::srv::GetPointMapROI_Request>::value &&
    has_bounded_size<map_msgs::srv::GetPointMapROI_Response>::value
  >
{
};

template<>
struct is_service<map_msgs::srv::GetPointMapROI>
  : std::true_type
{
};

template<>
struct is_service_request<map_msgs::srv::GetPointMapROI_Request>
  : std::true_type
{
};

template<>
struct is_service_response<map_msgs::srv::GetPointMapROI_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__DETAIL__GET_POINT_MAP_ROI__TRAITS_HPP_
