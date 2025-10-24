#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, j, k = 0;

    // Input size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    // Input elements of first array
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    for (i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[k++] = arr2[j];
    }

    // Display merged array
    printf("\nMerged array:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

