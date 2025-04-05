set(Material_Information_LIB_NAME Material_Information_Lib)

set(Material_Information_SOURCES
    "Material_Information.cpp")
set(Material_Information_HEADERS
    "include/Material_Information/Material_Information.hpp")

add_library(${Material_Information_LIB_NAME} STATIC
    ${Material_Information_SOURCES}
    ${Material_Information_HEADERS})
    
target_include_directories(${Material_Information_LIB_NAME} PUBLIC
    "include")