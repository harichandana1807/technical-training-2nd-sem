 #include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char str[], int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap(&str[l], &str[i]);       // Swap current index with loop index
            permute(str, l + 1, r);       // Recurse for the next index
            swap(&str[l], &str[i]);       // Backtrack to restore original string
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str); // No spaces allowed in this basic version

    int n = strlen(str);
    printf("All permutations of the string are:\n");
    permute(str, 0, n - 1);

    return 0;
}

