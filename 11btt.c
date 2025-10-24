#include <stdio.h>

// Function to perform binary search in rotated sorted array
int searchRotated(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        // Check if left half is sorted
        if (arr[low] <= arr[mid]) {
            if (key >= arr[low] && key < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half is sorted
        else {
            if (key > arr[mid] && key <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1; // Not found
}
int main() {
    int arr[] = {30, 40, 50, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = searchRotated(arr, n, key);

    if (index != -1)
        printf("Element %d found at index %d.\n", key, index);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}

