// Copyright 2021 NNTU-CS

#include <iostream>

int cbinsearch(int* arr, int size, int value) {
    int middle = 0;
    int left = 0;
    int right = size;
    int count = 0;
    
    while (1) {
        if (size % 2 == 0) {
            middle = size / 2;
        }
        else {
            middle = ((size - 1) / 2);
        }

        if (value < arr[middle]) {
            right = middle - 1;
        }
        else if (value > arr[middle]) {
            left = middle + 1;
        }
        else {
            count += 1;
        }

        if (count > 0) {
            return count;
        }
        else {
            return 0;
        }
    }
}
