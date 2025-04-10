set(COORDINATE_LIB_NAME Coordinates)

set(COORDINATE_SOURCES
    "Coordinates.cpp")
set(COORDINATE_HEADERS
<<<<<<< HEAD:sources/Data_Structures/Coordinates/CMakeLists.txt
    "include/${COORDINATE_LIB_NAME}/Coordinates.hpp")
=======
    "include/Coordinates/Coordinates.hpp")
>>>>>>> main:sources/Coordinates/CMakeLists.txt

add_library(${COORDINATE_LIB_NAME} STATIC
    ${COORDINATE_SOURCES}
    ${COORDINATE_HEADERS})
    
target_include_directories(${COORDINATE_LIB_NAME} PUBLIC
<<<<<<< HEAD:sources/Data_Structures/Coordinates/CMakeLists.txt
    "include/")
=======
    "include")
>>>>>>> main:sources/Coordinates/CMakeLists.txt
