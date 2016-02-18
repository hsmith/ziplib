###############################################################################
#
# ZipLib
# Source/Sample/CMakeLists.txt
#
# Howard N Smith (howard@blacktriangles.com)
# February 17, 2016
# (c) blacktriangles 2016 (http://www.blacktriangles.com)
###############################################################################

add_executable(
    ziplib_Sample
        Main.cpp
  )

target_link_libraries(
    ziplib_Sample
    PUBLIC
      ziplib
  )

include_directories( ${CMAKE_CURRENT_LIST_DIR} ${ZipLib_INCLUDE_DIR} )

set_property(
    TARGET ziplib_Sample
    PROPERTY CXX_STANDARD 11
  )
