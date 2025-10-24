#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *mergeFile;
    char ch;
    char fileName1[100], fileName2[100], fileName3[100];

    
    printf("Enter name of first file: ");
    scanf("%s", fileName1);

    printf("Enter name of second file: ");
    scanf("%s", fileName2);

    printf("Enter name of file to store merged content: ");
    scanf("%s", fileName3);

    
    file1 = fopen(fileName1, "r");
    if (file1 == NULL) {
        printf("Error: Cannot open %s\n", fileName1);
        exit(1);
    }
    file2 = fopen(fileName2, "r");
    if (file2 == NULL) {
        printf("Error: Cannot open %s\n", fileName2);
        fclose(file1);
        exit(1);
    }
    mergeFile = fopen(fileName3, "w");
    if (mergeFile == NULL) {
        printf("Error: Cannot create %s\n", fileName3);
        fclose(file1);
        fclose(file2);
        exit(1);
    }

    while ((ch = fgetc(file1)) != EOF)
        fputc(ch, mergeFile);

   
    while ((ch = fgetc(file2)) != EOF)
        fputc(ch, mergeFile);

    printf("Files merged successfully into '%s'\n", fileName3);

  
    fclose(file1);
    fclose(file2);
    fclose(mergeFile);

    return 0;
}

