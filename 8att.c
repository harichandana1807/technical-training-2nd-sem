#include <stdio.h>

int main() {
    int i,n,sum = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr; // pointer to the first element of array

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i); // using pointer arithmetic
    }

    // Calculate sum using pointer
    for (i = 0; i < n; i++) {
        sum += *(ptr + i); // dereference pointer to get value
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}

