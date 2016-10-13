#include <interpreter.h>
#include <gtest/gtest.h>
#include <easylogging++.h>

INITIALIZE_EASYLOGGINGPP
TEST(Interpreter, SimpleTest) {
    ASSERT_EQ(5, foo());
}
TEST(Interpreter_mymin, test_succes){
    EXPECT_EQ(1, mymin(1,2));
}
//TEST(Interpreter_mymin, test_failure){
//    EXPECT_EQ(2, mymin(1,2));
//}
