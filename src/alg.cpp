// Copyright 2021 NNTU-CS

#include <iostream>

int cbinsearch(int* arr, int size, int value) {
    int middle1 = 0;
    int middle2 = 0;
    int count = 0;
    int left = 0;
    int right = size-1;
    bool flag = false;

    while (left < right) {
        middle1 = ((size - 1) / 2);

        if (arr[middle1] == value) {
            middle2 = middle1;

            while (arr[middle1 - 1] == value) {
                count += 1;
            }

            while (arr[middle2 + 1] == value) {
                count += 1;
            }
        } else if (arr[middle1] > value) {
            right = middle1;
        } else {
            left = middle1;
        }
    }

    return count;
}
