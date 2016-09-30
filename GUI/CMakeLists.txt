set(SOURCE_FILES src/main.cpp src/gui.cpp)
include_directories(header)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${INTERPRETER_LIBRARIES})