#include "pch.h"
#include <gtest/gtest.h>

class Stack {
public:
    void push(int value) {
        if (top < 99) {
            stack[++top] = value;
        }
    }

    int pop() {
        if (top >= 0) {
            return stack[top--];
        }
        return -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

private:
    int stack[100];
    int top = -1;

};



TEST(StackTest, PushAndPop) {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    EXPECT_EQ(s.pop(), 3);
    EXPECT_EQ(s.pop(), 2);
    EXPECT_EQ(s.pop(), 1);
}

TEST(StackTest, IsEmpty) {
    Stack s;
    EXPECT_TRUE(s.isEmpty());
    s.push(1);
    EXPECT_FALSE(s.isEmpty());
}
