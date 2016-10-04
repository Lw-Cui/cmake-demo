cmake_minimum_required(VERSION 3.6)
project(CMakeDemo)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(Header)

set(GTEST_ROOT ${PROJECT_SOURCE_DIR}/googletest)
add_subdirectory(googletest)

set(GRAPHICS_LIBRARIES graphicsLib)
add_subdirectory(GraphicsLib)

set(INTERPRETER_LIBRARIES interpreter)
add_subdirectory(Interpreter)

add_subdirectory(GUI)

