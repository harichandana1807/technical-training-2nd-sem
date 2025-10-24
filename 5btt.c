#include <stdio.h>

int main() {
    int arr[50], n, i, first;

    // Input array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store the first element
    first = arr[0];

    // Shift all elements to the left by one
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Move the first element to the last position
    arr[n - 1] = first;

    // Display the rotated array
    printf("\nArray after left rotation by one position:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

