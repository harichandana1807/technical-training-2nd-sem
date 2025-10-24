#include <stdio.h>
#include <string.h>

// Define a structure for Employee
struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

// Function to add employee details
void addEmployee(struct Employee emp[], int *count) {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[*count].id);
    printf("Enter Employee Name: ");
    scanf("%s", emp[*count].name);
    printf("Enter Department: ");
    scanf("%s", emp[*count].department);
    printf("Enter Salary: ");
    scanf("%f", &emp[*count].salary);

    (*count)++; // Increase count of employees
    printf("\nEmployee added successfully!\n");
}

// Function to display all employees
void displayEmployees(struct Employee emp[], int count) {
    if (count == 0) {
        printf("\nNo employee records available.\n");
        return;
    }
int i;
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < count; i++) {
        printf("\nEmployee ID: %d", emp[i].id);
        printf("\nName       : %s", emp[i].name);
        printf("\nDepartment : %s", emp[i].department);
        printf("\nSalary     : %.2f\n", emp[i].salary);
    }
}

// Function to search employee by ID
void searchEmployee(struct Employee emp[], int count) {
    int id, found = 0;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);
int i;
    for ( i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found!\n");
            printf("ID        : %d\n", emp[i].id);
            printf("Name      : %s\n", emp[i].name);
            printf("Department: %s\n", emp[i].department);
            printf("Salary    : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee with ID %d not found.\n", id);
}

int main() {
    struct Employee emp[100]; // Array of Employee structures
    int count = 0;            // Keeps track of number of employees
    int choice;

    do {
        printf("\n--- Employee Management System ---");
        printf("\n1. Add Employee");
        printf("\n2. Display All Employees");
        printf("\n3. Search Employee by ID");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(emp, &count);
                break;
            case 2:
                displayEmployees(emp, count);
                break;
            case 3:
                searchEmployee(emp, count);
                break;
            case 4:
                printf("\nExiting program...\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
