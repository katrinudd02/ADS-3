// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    
    int count = 0;
    int left = 0;
    int right = size - 1;

    while (left < right) {
        if (arr[left] == value) {
            count++;
        }
        if (arr[right] == value) {
            count++;
        }
        left++;
        right--;
    }

    if (left == right) {
        if (arr[left] == value) {
            count++;
        }
    }

    return count;
}
