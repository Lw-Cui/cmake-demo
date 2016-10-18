#include <internal.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <easylogging++.h>

INITIALIZE_EASYLOGGINGPP

class MockTmp {
public:
    MOCK_METHOD1(foo, void(int));
};

TEST(GraphicsLib, SimpleTest) {
    ASSERT_EQ(func(), 0);
}

TEST(GraphicsLib, MockTest) {
    MockTmp tmp;
    EXPECT_CALL(tmp, foo(4)).Times(testing::AtLeast(2));
    tmp.foo(4);
    tmp.foo(4);
}

int main(int argc, char *argv[]) {
    testing::InitGoogleMock(&argc, argv);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
