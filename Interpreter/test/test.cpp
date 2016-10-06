#include <interpreter.h>
#include <gtest/gtest.h>

TEST(Interpreter, SimpleTest) {
    ASSERT_EQ(foo(), 5);
}
