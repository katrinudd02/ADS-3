// Copyright 2021 NNTU-CS

#include <iostream>

int cbinsearch(int* arr, int size, int value) {
    int count = 0;
    int left = 0;
    int right = size-1;
    int middle1 = left + (right - l) / 2;
    
    while (left < right) {
        if (arr[middle1] == value) {
            int middle2 = middle1;

            while (arr[--middle1] == value){
                count+=1;
            }
            
            while (arr[++middle2] == value){
                count+=1;
            }
            return count;
      } else if (arr[middle1] > value) {
            right = middle1;
      } else {
            left = middle1 + 1;
      }
    }
    return 0;
}
