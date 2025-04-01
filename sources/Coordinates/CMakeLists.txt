set(COORDINATE_LIB_NAME Coordinate_Lib)

set(COORDINATE_SOURCES
    "Coordinates.cpp")
set(COORDINATE_HEADERS
    "Coordinates.hpp")
set(COORDINATE_INCLUDES
    "./")

add_library(${COORDINATE_LIB_NAME} STATIC
    ${COORDINATE_SOURCES}
    ${COORDINATE_HEADERS})
    
target_include_directories(${COORDINATE_LIB_NAME} PUBLIC
    ${COORDINATE_INCLUDES})