// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_msgs:srv\SetMapProjections.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__SET_MAP_PROJECTIONS__TRAITS_HPP_
#define MAP_MSGS__SRV__DETAIL__SET_MAP_PROJECTIONS__TRAITS_HPP_

#include "map_msgs/srv/detail/set_map_projections__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const map_msgs::srv::SetMapProjections_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const map_msgs::srv::SetMapProjections_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<map_msgs::srv::SetMapProjections_Request>()
{
  return "map_msgs::srv::SetMapProjections_Request";
}

template<>
inline const char * name<map_msgs::srv::SetMapProjections_Request>()
{
  return "map_msgs/srv/SetMapProjections_Request";
}

template<>
struct has_fixed_size<map_msgs::srv::SetMapProjections_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<map_msgs::srv::SetMapProjections_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<map_msgs::srv::SetMapProjections_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'projected_maps_info'
#include "map_msgs/msg/detail/projected_map_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const map_msgs::srv::SetMapProjections_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: projected_maps_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.projected_maps_info.size() == 0) {
      out << "projected_maps_info: []\n";
    } else {
      out << "projected_maps_info:\n";
      for (auto item : msg.projected_maps_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const map_msgs::srv::SetMapProjections_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<map_msgs::srv::SetMapProjections_Response>()
{
  return "map_msgs::srv::SetMapProjections_Response";
}

template<>
inline const char * name<map_msgs::srv::SetMapProjections_Response>()
{
  return "map_msgs/srv/SetMapProjections_Response";
}

template<>
struct has_fixed_size<map_msgs::srv::SetMapProjections_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_msgs::srv::SetMapProjections_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<map_msgs::srv::SetMapProjections_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_msgs::srv::SetMapProjections>()
{
  return "map_msgs::srv::SetMapProjections";
}

template<>
inline const char * name<map_msgs::srv::SetMapProjections>()
{
  return "map_msgs/srv/SetMapProjections";
}

template<>
struct has_fixed_size<map_msgs::srv::SetMapProjections>
  : std::integral_constant<
    bool,
    has_fixed_size<map_msgs::srv::SetMapProjections_Request>::value &&
    has_fixed_size<map_msgs::srv::SetMapProjections_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_msgs::srv::SetMapProjections>
  : std::integral_constant<
    bool,
    has_bounded_size<map_msgs::srv::SetMapProjections_Request>::value &&
    has_bounded_size<map_msgs::srv::SetMapProjections_Response>::value
  >
{
};

template<>
struct is_service<map_msgs::srv::SetMapProjections>
  : std::true_type
{
};

template<>
struct is_service_request<map_msgs::srv::SetMapProjections_Request>
  : std::true_type
{
};

template<>
struct is_service_response<map_msgs::srv::SetMapProjections_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MSGS__SRV__DETAIL__SET_MAP_PROJECTIONS__TRAITS_HPP_
