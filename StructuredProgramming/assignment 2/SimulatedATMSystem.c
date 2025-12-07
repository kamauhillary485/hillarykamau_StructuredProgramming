#include <stdio.h>
#include <stdlib.h>

int main() {
    int correctPIN = 1234;
    double balance = 1000.00;  
    int choice;
    double amount;
    int enteredPin;

    printf("=== Simple ATM System ===\n");

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != correctPIN) {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    printf("Login successful!\n");

    do {
        // Display ATM Menu
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Your current balance is: KES %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%lf", &amount);

            if (amount <= 0) {
                printf("Invalid amount.\n");
            } else {
                balance += amount;
                printf("Deposit successful! New balance = KES %.2f\n", balance);
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);

            if (amount <= 0) {
                printf("Invalid amount.\n");
            } else if (amount > balance) {
                printf("Insufficient balance. Withdrawal failed.\n");
            } else {
                balance -= amount;
                printf("Withdrawal successful! New balance = KES %.2f\n", balance);
            }
            break;

        case 4:
            printf("Thank you for using this ATM. Goodbye!\n");
            break;

        default:
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}

    



