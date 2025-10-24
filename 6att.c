#include <stdio.h>

// Function to calculate average of an array
float findAverage(int arr[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main() {
    int arr[50], n, i;
    float avg;

    // Input array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to calculate average
    avg = findAverage(arr, n);

    // Display average
    printf("\nAverage of array elements: %.2f\n", avg);

    return 0;
}

