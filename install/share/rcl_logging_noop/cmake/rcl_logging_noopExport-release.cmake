#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl_logging_noop::rcl_logging_noop" for configuration "Release"
set_property(TARGET rcl_logging_noop::rcl_logging_noop APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rcl_logging_noop::rcl_logging_noop PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rcl_logging_noop.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "rcutils::rcutils"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rcl_logging_noop.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl_logging_noop::rcl_logging_noop )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl_logging_noop::rcl_logging_noop "${_IMPORT_PREFIX}/lib/rcl_logging_noop.lib" "${_IMPORT_PREFIX}/bin/rcl_logging_noop.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
