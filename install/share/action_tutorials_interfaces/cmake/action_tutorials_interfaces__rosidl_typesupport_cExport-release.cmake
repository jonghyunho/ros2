#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "action_tutorials_interfaces::action_tutorials_interfaces__rosidl_typesupport_c" for configuration "Release"
set_property(TARGET action_tutorials_interfaces::action_tutorials_interfaces__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(action_tutorials_interfaces::action_tutorials_interfaces__rosidl_typesupport_c PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/action_tutorials_interfaces__rosidl_typesupport_c.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/action_tutorials_interfaces__rosidl_typesupport_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS action_tutorials_interfaces::action_tutorials_interfaces__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_action_tutorials_interfaces::action_tutorials_interfaces__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/action_tutorials_interfaces__rosidl_typesupport_c.lib" "${_IMPORT_PREFIX}/bin/action_tutorials_interfaces__rosidl_typesupport_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
