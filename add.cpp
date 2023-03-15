#include "pch.h"
#include <gtest/gtest.h>

int add(int a, int b) {
	return a + b;
}

TEST(MyTest, TestAdd) {
	EXPECT_EQ(add(2, 3), 5);
}


