// Copyright 2021 NNTU-CS

#include <iostream>

int cbinsearch(int* arr, int size, int value) {
    int middle = ((size-1)/2);
    int count = 0;
    
    /*if (size % 2 == 0) {
        middle = size / 2;
    } else {
        middle = ((size - 1) / 2);
    }*/

    if (value < arr[middle]) {
        for (int i = middle; i >= 0; i--) {
            if (arr[i] == value) {
                count += 1;
            }
        }
    } else if (value > arr[middle]) {
        for (int j = middle; j < size; j++) {
            if (arr[j] == value) {
                count += 1;
            }
        }
    } else {
        count += 1;
    }

    return count;
}
