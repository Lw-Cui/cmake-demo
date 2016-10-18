set(SOURCE_FILES src/graphics.cpp)
include_directories(header)
add_library(${GRAPHICS_LIBRARIES} STATIC ${SOURCE_FILES})

set(TEST_FILES test/test.cpp)
set(TEST GraphicsLibTest)
ADD_EXECUTABLE(${TEST} ${TEST_FILES})
target_link_libraries(${TEST} ${GRAPHICS_LIBRARIES} gtest gmock)
