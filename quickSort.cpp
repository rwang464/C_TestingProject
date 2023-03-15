#include "pch.h"
#include "quickSort.h"
#include <gtest/gtest.h>

void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = arr[right];
        int i = left - 1;

        for (int j = left; j <= right - 1; j++) {
            if (arr[j] <= pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }

        std::swap(arr[i + 1], arr[right]);

        int pi = i + 1;

        quicksort(arr, left, pi - 1);
        quicksort(arr, pi + 1, right);
    }
}

TEST(QuickSortTest, SortsArrayCorrectly) {
    int arr[] = { 5, 2, 4, 6, 1, 3 };
    int expected[] = { 1, 2, 3, 4, 5, 6 };
    quicksort(arr, 0, 5);
    for (int i = 0; i < 6; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(QuickSortTest, SortsEmptyArray) {
    int arr[1] = {0};
    quicksort(arr, 0, 0);
    EXPECT_EQ(arr[0], 0);
}

TEST(QuickSortTest, SortsSortedArray) {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    quicksort(arr, 0, 5);
    for (int i = 0; i < 6; i++) {
        EXPECT_EQ(arr[i], i + 1);
    }
}

TEST(QuickSortTest, SortsReversedArray) {
    int arr[] = { 6, 5, 4, 3, 2, 1 };
    quicksort(arr, 0, 5);
    for (int i = 0; i < 6; i++) {
        EXPECT_EQ(arr[i], i + 1);
    }
}