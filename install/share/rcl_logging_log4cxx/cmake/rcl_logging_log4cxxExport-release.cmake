#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl_logging_log4cxx::rcl_logging_log4cxx" for configuration "Release"
set_property(TARGET rcl_logging_log4cxx::rcl_logging_log4cxx APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rcl_logging_log4cxx::rcl_logging_log4cxx PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rcl_logging_log4cxx.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rcl_logging_log4cxx.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl_logging_log4cxx::rcl_logging_log4cxx )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl_logging_log4cxx::rcl_logging_log4cxx "${_IMPORT_PREFIX}/lib/rcl_logging_log4cxx.lib" "${_IMPORT_PREFIX}/bin/rcl_logging_log4cxx.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
