#include <stdio.h>
#include <string.h>

// Define a union for bank account information
union BankAccount {
    long accountNumber;
    char accountHolderName[50];
    float accountBalance;
};

int main() {
    union BankAccount account;
    int choice;

    printf("--- Bank Account Information (Using Union) ---\n");
    printf("Select what information to store:\n");
    printf("1. Account Number\n");
    printf("2. Account Holder Name\n");
    printf("3. Account Balance\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter Account Number: ");
            scanf("%ld", &account.accountNumber);
            printf("Stored Account Number: %ld\n", account.accountNumber);
            break;
        case 2:
            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", account.accountHolderName);  // allows spaces
            printf("Stored Account Holder Name: %s\n", account.accountHolderName);
            break;
        case 3:
            printf("Enter Account Balance: ");
            scanf("%f", &account.accountBalance);
            printf("Stored Account Balance: %.2f\n", account.accountBalance);
            break;
        default:
            printf("Invalid choice!\n");
    }

    // Display memory size used by union
    printf("\nMemory used by union: %lu bytes\n", sizeof(account));

    return 0;
}

