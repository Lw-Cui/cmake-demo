#include <internal.h>
#include <gtest/gtest.h>
#include <easylogging++.h>

INITIALIZE_EASYLOGGINGPP
TEST(GraphicsLib, SimpleTest) {
    ASSERT_EQ(func(), 0);
}
