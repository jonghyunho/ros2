#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ros2cli_test_interfaces::ros2cli_test_interfaces__rosidl_typesupport_cpp" for configuration "Release"
set_property(TARGET ros2cli_test_interfaces::ros2cli_test_interfaces__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ros2cli_test_interfaces::ros2cli_test_interfaces__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ros2cli_test_interfaces__rosidl_typesupport_cpp.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/ros2cli_test_interfaces__rosidl_typesupport_cpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS ros2cli_test_interfaces::ros2cli_test_interfaces__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_ros2cli_test_interfaces::ros2cli_test_interfaces__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/ros2cli_test_interfaces__rosidl_typesupport_cpp.lib" "${_IMPORT_PREFIX}/bin/ros2cli_test_interfaces__rosidl_typesupport_cpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
