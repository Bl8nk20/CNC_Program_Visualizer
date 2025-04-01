set(CONSOLE_NAME Console_Exe)

set(EXE_SOURCES "main.cpp")

set(EXE_INCLUDES 
  "./")

add_executable(${CONSOLE_NAME} ${EXE_SOURCES})

target_include_directories(${CONSOLE_NAME} PUBLIC ${EXE_INCLUDES})

target_link_libraries(
  ${CONSOLE_NAME} PUBLIC
    ${LIBRARY_NAME}
    nlohmann_json::nlohmann_json
    fmt::fmt
    spdlog::spdlog
    cxxopts::cxxopts)