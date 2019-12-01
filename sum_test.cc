#include "gtest/gtest.h"
#include "library.h"

TEST(HelloTest, GetGreet)
{
	EXPECT_EQ("Hello Bazel", "Hello Bazel");
}

TEST(Sum_test, sum)
{
int a = 5;
int b = 10;

EXPECT_EQ(sum(a, b), 15);
}
