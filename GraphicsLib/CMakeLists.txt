set(SOURCE_FILES src/graphics.cpp)
include_directories(header)
add_library(${GRAPHICS_LIBRARIES} STATIC ${SOURCE_FILES})
