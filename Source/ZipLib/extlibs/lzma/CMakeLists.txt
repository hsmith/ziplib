###############################################################################
#
# ZipLib
# Source/ZipLib/extlibs/lzma/CMakeLists.txt
#
# Howard N Smith (howard@blacktriangles.com)
# February 17, 2016
# (c) blacktriangles 2016 (http://www.blacktriangles.com)
###############################################################################

if( WIN32 )
  message( "BUILDING WIN32" )
  include_directories( ${CMAKE_CURRENT_LIST_DIR} )
  file(
      GLOB
        lzma_SOURCES
        ${CMAKE_CURRENT_LIST_DIR}
        *.c
    )
else()
  message( "BUILDING POSIX" )
  include_directories( ${CMAKE_CURRENT_LIST_DIR}/unix )
  file(
    GLOB_RECURSE
      lzma_SOURCES
      ${CMAKE_CURRENT_LIST_DIR}
      unix/*.c
  )
endif()


message( "LZMA Sources: " ${lzma_SOURCES} )

add_library( lzma ${lzma_SOURCES} )
