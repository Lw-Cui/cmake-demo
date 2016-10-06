#include <interpreter.h>
#include <gtest/gtest.h>
#include <easylogging++.h>

INITIALIZE_EASYLOGGINGPP
TEST(Interpreter, SimpleTest) {
    ASSERT_EQ(foo(), 5);
}
