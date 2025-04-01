cmake_minimum_required(VERSION 3.22)

project(CNC_SIMULATION VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

# Include Custom .cmake files
include(AddGitSubmodule)
include(GithubIncludes)
include(Docs)

# add subdirectories
add_subdirectory(sources)
add_subdirectory(app)