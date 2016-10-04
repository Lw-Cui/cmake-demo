set(SOURCE_FILES src/graphics.cpp)
include_directories(header)
add_library(${GRAPHICS_LIBRARIES} STATIC ${SOURCE_FILES})

include_directories(${GTEST_ROOT}/include/gtest)
set(TEST_FILES src/test.cpp)
set(TEST GraphicsLibTest)
ADD_EXECUTABLE(${TEST} ${TEST_FILES})
target_link_libraries(${TEST} ${GRAPHICS_LIBRARIES} gtest gtest_main)
