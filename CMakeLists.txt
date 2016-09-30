cmake_minimum_required(VERSION 3.6)
project(test2)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(header)

set(GRAPHICS_LIBRARIES graphicsLib)
add_subdirectory(GraphicsLib)

set(INTERPRETER_LIBRARIES interpreter)
add_subdirectory(Interpreter)

add_subdirectory(GUI)
