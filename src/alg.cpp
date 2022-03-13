// Copyright 2021 NNTU-CS

#include <iostream>

int cbinsearch(int* arr, int size, int value) {
    int middle = 0;
    int count = 0;
    int left = 0;
    int right = size;
    bool flag = false;

    while ((left <= right) && (flag != true)) {
        middle = ((size - 1) / 2);
        if (arr[middle] == value) {
            flag = true;
            count += 1;
        }
        else if (arr[middle] > value) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }

    return count;
}
