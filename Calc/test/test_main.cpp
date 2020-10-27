#include "gtest/gtest.h"
#include "Summator.h"


TEST(Summator, UsageTest)
{
    Summator s;
    ASSERT_EQ(s.sum(1,3), 4);
}

TEST(Summator, Incorrect)
{
    ASSERT_TRUE(false);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}