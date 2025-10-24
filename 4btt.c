#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;
    int n, i;
    char filename[100];
    printf("Enter filename to store student records: ");
    scanf("%s", filename);

    fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        exit(1);
   }
    printf("Enter number of students: ");
    scanf("%d", &n);

   
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(struct Student), 1, fp);
    }

    fclose(fp);

    printf("\nRecords saved successfully to '%s'.\n", filename);

 
    fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        exit(1);
    }

    printf("\n--- Student Records from File ---\n");
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Roll No: %d\tName: %s\tMarks: %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
    return 0;
}

