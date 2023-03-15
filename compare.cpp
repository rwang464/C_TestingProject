#include "pch.h"
#include <gtest/gtest.h>

template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

TEST(CompareTest, ReturnsMaximumValue) {
    EXPECT_EQ(max(1, 2), 2);
    EXPECT_EQ(max('a', 'b'), 'b');
    EXPECT_EQ(max(3.14, 2.71), 3.14);
}
