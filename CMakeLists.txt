cmake_minimum_required(VERSION 2.8)
project(CMakeDemo)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fprofile-arcs -ftest-coverage")
include_directories(Header)
include_directories(external/easylogging)

set(GTEST_ROOT ${PROJECT_SOURCE_DIR}/external/googletest)
add_subdirectory(external/googletest)

set(GRAPHICS_LIBRARIES graphicsLib)
add_subdirectory(GraphicsLib)

set(INTERPRETER_LIBRARIES interpreter)
add_subdirectory(Interpreter)

add_subdirectory(GUI)

