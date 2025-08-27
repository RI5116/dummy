#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the key is present at the middle
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is greater, ignore the left half
        if (arr[mid] < key) {
            low = mid + 1;
        }

        // If the key is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Key is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result = binarySearch(arr, size, key);
    
    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }

    return 0;
}