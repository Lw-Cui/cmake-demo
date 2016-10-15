cmake_minimum_required(VERSION 2.8)
project(CMakeDemo)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(Header)
include_directories(external/easylogging)

add_subdirectory(external/googletest)

set(GRAPHICS_LIBRARIES graphicsLib)
add_subdirectory(GraphicsLib)

set(INTERPRETER_LIBRARIES interpreter)
add_subdirectory(Interpreter)

add_subdirectory(GUI)

