// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmw_dds_common:msg\NodeEntitiesInfo.idl
// generated code does not contain a copyright notice

#ifndef RMW_DDS_COMMON__MSG__DETAIL__NODE_ENTITIES_INFO__TRAITS_HPP_
#define RMW_DDS_COMMON__MSG__DETAIL__NODE_ENTITIES_INFO__TRAITS_HPP_

#include "rmw_dds_common/msg/detail/node_entities_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'reader_gid_seq'
// Member 'writer_gid_seq'
#include "rmw_dds_common/msg/detail/gid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rmw_dds_common::msg::NodeEntitiesInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_namespace: ";
    value_to_yaml(msg.node_namespace, out);
    out << "\n";
  }

  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: reader_gid_seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reader_gid_seq.size() == 0) {
      out << "reader_gid_seq: []\n";
    } else {
      out << "reader_gid_seq:\n";
      for (auto item : msg.reader_gid_seq) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: writer_gid_seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.writer_gid_seq.size() == 0) {
      out << "writer_gid_seq: []\n";
    } else {
      out << "writer_gid_seq:\n";
      for (auto item : msg.writer_gid_seq) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rmw_dds_common::msg::NodeEntitiesInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rmw_dds_common::msg::NodeEntitiesInfo>()
{
  return "rmw_dds_common::msg::NodeEntitiesInfo";
}

template<>
inline const char * name<rmw_dds_common::msg::NodeEntitiesInfo>()
{
  return "rmw_dds_common/msg/NodeEntitiesInfo";
}

template<>
struct has_fixed_size<rmw_dds_common::msg::NodeEntitiesInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmw_dds_common::msg::NodeEntitiesInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmw_dds_common::msg::NodeEntitiesInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMW_DDS_COMMON__MSG__DETAIL__NODE_ENTITIES_INFO__TRAITS_HPP_
