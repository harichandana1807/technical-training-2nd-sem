#include <stdio.h>
#include <ctype.h>  
#include <string.h> 

int main() {
    char str[200];
    int alphabet[26] = {0}; 
    int i, index, isPangram = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  


    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') {
            index = ch - 'a';      
            alphabet[index] = 1;   
        }
    }

    
    for (i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            isPangram = 0;
            break;
        }
    }

    if (isPangram)
        printf("The given string is a Pangram.\n");
    else
        printf("The given string is NOT a Pangram.\n");

    return 0;
}

