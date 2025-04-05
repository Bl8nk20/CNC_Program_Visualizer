set(Tool_Information_LIB_NAME Tool_Information_Lib)

set(Tool_Information_SOURCES
    "Tool_Information.cpp")
set(Tool_Information_HEADERS
    "include/Tool_Information/Tool_Information.hpp")

add_library(${Tool_Information_LIB_NAME} STATIC
    ${Tool_Information_SOURCES}
    ${Tool_Information_HEADERS})
    
target_include_directories(${Tool_Information_LIB_NAME} PUBLIC
    "include")