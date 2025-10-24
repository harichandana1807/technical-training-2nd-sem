#include <stdio.h>
#include <string.h>
int romanValue(char r) {
    switch (r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;  
    }
}

int main() {
    char roman[50];
    int i, total = 0;
    printf("Enter a Roman numeral (in uppercase): ");
    scanf("%s", roman);

    int length = strlen(roman);
    for (i = 0; i < length; i++) {
        int s1 = romanValue(roman[i]);
        int s2 = romanValue(roman[i + 1]);
        if (s1 < s2)
            total -= s1;
        else
            total += s1;
    }

    printf("Integer value: %d\n", total);

    return 0;
}

