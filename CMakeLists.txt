###############################################################################
#
# ZipLib
# CMakeLists.txt
#
# Howard N Smith (howard@blacktriangles.com)
# February 17, 2016
# (c) blacktriangles 2016 (http://www.blacktriangles.com)
###############################################################################

cmake_minimum_required( VERSION 3.0.0 )

project( ziplib )

add_subdirectory( Source )

set( 
    ZipLib_INCLUDE_DIR
    ${CMAKE_CURRENT_LIST_DIR}/Source
    CACHE STRING "ZipLib Include Directories"
  )