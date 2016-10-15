set(SOURCE_FILES src/interpreter.cpp)
include_directories(header)
add_library(${INTERPRETER_LIBRARIES} STATIC ${SOURCE_FILES})
target_link_libraries(${INTERPRETER_LIBRARIES} ${GRAPHICS_LIBRARIES})

set(TEST_FILES test/test.cpp)
set(TEST InterpreterTest)
ADD_EXECUTABLE(${TEST} ${TEST_FILES})
target_link_libraries(${TEST} ${INTERPRETER_LIBRARIES} gtest gtest_main)