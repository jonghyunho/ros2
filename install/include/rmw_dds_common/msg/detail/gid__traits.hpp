// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmw_dds_common:msg\Gid.idl
// generated code does not contain a copyright notice

#ifndef RMW_DDS_COMMON__MSG__DETAIL__GID__TRAITS_HPP_
#define RMW_DDS_COMMON__MSG__DETAIL__GID__TRAITS_HPP_

#include "rmw_dds_common/msg/detail/gid__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rmw_dds_common::msg::Gid & msg,
  std::ostream & out, size_t indentation = 0)
{
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rmw_dds_common::msg::Gid & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rmw_dds_common::msg::Gid>()
{
  return "rmw_dds_common::msg::Gid";
}

template<>
inline const char * name<rmw_dds_common::msg::Gid>()
{
  return "rmw_dds_common/msg/Gid";
}

template<>
struct has_fixed_size<rmw_dds_common::msg::Gid>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmw_dds_common::msg::Gid>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmw_dds_common::msg::Gid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMW_DDS_COMMON__MSG__DETAIL__GID__TRAITS_HPP_
