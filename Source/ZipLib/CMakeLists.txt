###############################################################################
#
# ZipLib
# Source/ZipLib/CMakeLists.txt
#
# Howard N Smith (howard@blacktriangles.com)
# February 17, 2016
# (c) blacktriangles 2016 (http://www.blacktriangles.com)
###############################################################################

include_directories( ${CMAKE_CURRENT_LIST_DIR} )

add_subdirectory( extlibs )

#me so lazy
file(
  GLOB
    ZipLib_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}
    *.cpp
    detail/*.cpp
  )

add_library( ziplib ${ZipLib_SOURCES} )

target_link_libraries(
    ziplib
      PUBLIC
        bzip2
        lzma
        zlib
  )

set_property(
    TARGET ziplib
    PROPERTY CXX_STANDARD 11
  )