###############################################################################
#
# ZipLib
# Source/ZipLib/extlibs/bzip2/CMakeLists.txt
#
# Howard N Smith (howard@blacktriangles.com)
# February 17, 2016
# (c) blacktriangles 2016 (http://www.blacktriangles.com)
###############################################################################

include_directories( ${CMAKE_CURRENT_LIST_DIR} )

file(
    GLOB
      bzip2_SOURCES
      ${CMAKE_CURRENT_LIST_DIR}
      *.c
  )

add_library( bzip2 ${bzip2_SOURCES} )
