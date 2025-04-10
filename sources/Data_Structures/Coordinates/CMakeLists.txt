set(COORDINATE_LIB_NAME Coordinates)

set(COORDINATE_SOURCES
    "Coordinates.cpp")
set(COORDINATE_HEADERS
    "include/${COORDINATE_LIB_NAME}/Coordinates.hpp")

add_library(${COORDINATE_LIB_NAME} STATIC
    ${COORDINATE_SOURCES}
    ${COORDINATE_HEADERS})
    
target_include_directories(${COORDINATE_LIB_NAME} PUBLIC
    "include/")
