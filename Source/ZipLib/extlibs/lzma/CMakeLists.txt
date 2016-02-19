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
  include_directories( ${CMAKE_CURRENT_LIST_DIR} )
  file(
      GLOB
        lzma_SOURCES
        ${CMAKE_CURRENT_LIST_DIR}
        *.c
    )
else()
  include_directories( ${CMAKE_CURRENT_LIST_DIR}/unix )
  file(
    GLOB_RECURSE
      lzma_SOURCES
      ${CMAKE_CURRENT_LIST_DIR}
      unix/*.c
  )
endif()

add_library( lzma ${lzma_SOURCES} )

if( UNIX AND NOT APPLE )
  find_package( Threads REQUIRED )
  target_link_libraries( lzma ${CMAKE_THREAD_LIBS_INIT} )
endif()