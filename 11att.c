
#include <stdio.h>

// Function to perform Sentinel Linear Search
int sentinelSearch(int arr[], int n, int key) {
    int last = arr[n - 1];  // Save the last element
    arr[n - 1] = key;       // Place sentinel

    int i = 0;
    while (arr[i] != key)
        i++;

    arr[n - 1] = last;      // Restore last element

    // Check if key was found before the sentinel
    if (i < n - 1 || arr[n - 1] == key)
        return i;
    else
        return -1;
}

int main() {
    int arr[100], i,n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = sentinelSearch(arr, n, key);

    if (index != -1)
        printf("Element %d found at index %d.\n", key, index);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}




