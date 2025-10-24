
#include <stdio.h>

// Recursive function to compute factorial and track depth
int factorial(int n) {
    static int depth = 0;  // Tracks recursion depth
    depth++;

    printf("Entering depth %d: factorial(%d)\n", depth, n);

    int result;
    if (n <= 1)
        result = 1;
    else
        result = n * factorial(n - 1);

    printf("Exiting depth %d: factorial(%d) = %d\n", depth, n, result);
    depth--;

    return result;
}

int main() {
    int num;

    printf("Enter a number to compute factorial: ");
    scanf("%d", &num);

    int result = factorial(num);
    printf("\nFinal Result: %d! = %d\n", num, result);

    return 0;
}




