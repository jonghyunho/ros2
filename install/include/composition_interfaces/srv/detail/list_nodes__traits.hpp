// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from composition_interfaces:srv\ListNodes.idl
// generated code does not contain a copyright notice

#ifndef COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__TRAITS_HPP_
#define COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__TRAITS_HPP_

#include "composition_interfaces/srv/detail/list_nodes__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const composition_interfaces::srv::ListNodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const composition_interfaces::srv::ListNodes_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<composition_interfaces::srv::ListNodes_Request>()
{
  return "composition_interfaces::srv::ListNodes_Request";
}

template<>
inline const char * name<composition_interfaces::srv::ListNodes_Request>()
{
  return "composition_interfaces/srv/ListNodes_Request";
}

template<>
struct has_fixed_size<composition_interfaces::srv::ListNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<composition_interfaces::srv::ListNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<composition_interfaces::srv::ListNodes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const composition_interfaces::srv::ListNodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: full_node_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.full_node_names.size() == 0) {
      out << "full_node_names: []\n";
    } else {
      out << "full_node_names:\n";
      for (auto item : msg.full_node_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: unique_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unique_ids.size() == 0) {
      out << "unique_ids: []\n";
    } else {
      out << "unique_ids:\n";
      for (auto item : msg.unique_ids) {
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

inline std::string to_yaml(const composition_interfaces::srv::ListNodes_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<composition_interfaces::srv::ListNodes_Response>()
{
  return "composition_interfaces::srv::ListNodes_Response";
}

template<>
inline const char * name<composition_interfaces::srv::ListNodes_Response>()
{
  return "composition_interfaces/srv/ListNodes_Response";
}

template<>
struct has_fixed_size<composition_interfaces::srv::ListNodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<composition_interfaces::srv::ListNodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<composition_interfaces::srv::ListNodes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<composition_interfaces::srv::ListNodes>()
{
  return "composition_interfaces::srv::ListNodes";
}

template<>
inline const char * name<composition_interfaces::srv::ListNodes>()
{
  return "composition_interfaces/srv/ListNodes";
}

template<>
struct has_fixed_size<composition_interfaces::srv::ListNodes>
  : std::integral_constant<
    bool,
    has_fixed_size<composition_interfaces::srv::ListNodes_Request>::value &&
    has_fixed_size<composition_interfaces::srv::ListNodes_Response>::value
  >
{
};

template<>
struct has_bounded_size<composition_interfaces::srv::ListNodes>
  : std::integral_constant<
    bool,
    has_bounded_size<composition_interfaces::srv::ListNodes_Request>::value &&
    has_bounded_size<composition_interfaces::srv::ListNodes_Response>::value
  >
{
};

template<>
struct is_service<composition_interfaces::srv::ListNodes>
  : std::true_type
{
};

template<>
struct is_service_request<composition_interfaces::srv::ListNodes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<composition_interfaces::srv::ListNodes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__TRAITS_HPP_
