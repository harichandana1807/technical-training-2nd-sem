#include <stdio.h>

// Function to calculate average of array elements
float average(int *arr, int size) {
    int sum = 0;
    int i;
    for(i = 0; i < size; i++) {
        sum += *(arr + i);  // Access elements using pointer
    }
    return (float)sum / size; // Return average
}

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float avg = average(arr, n); // Call function
    printf("Average of array elements = %.2f\n", avg);

    return 0;
}

