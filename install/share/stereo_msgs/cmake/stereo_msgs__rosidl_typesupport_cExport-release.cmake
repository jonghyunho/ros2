#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "stereo_msgs::stereo_msgs__rosidl_typesupport_c" for configuration "Release"
set_property(TARGET stereo_msgs::stereo_msgs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(stereo_msgs::stereo_msgs__rosidl_typesupport_c PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/stereo_msgs__rosidl_typesupport_c.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/stereo_msgs__rosidl_typesupport_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS stereo_msgs::stereo_msgs__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_stereo_msgs::stereo_msgs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/stereo_msgs__rosidl_typesupport_c.lib" "${_IMPORT_PREFIX}/bin/stereo_msgs__rosidl_typesupport_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
