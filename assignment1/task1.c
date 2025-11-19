#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    // Ask the user for the first number
    printf("Enter the first number: ");
    while (scanf("%f", &num1) != 1) {
        printf("Invalid input! Please enter a number: ");
        while (getchar() != '\n'); // clear the input buffer
    }

    // Ask the user for an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);   // space before %c avoids reading leftover input

    // Ask for the second number
    printf("Enter the second number: ");
    while (scanf("%f", &num2) != 1) {
        printf("Invalid input! Please enter a number: ");
        while (getchar() != '\n');
    }

    // Perform calculation
    printf("\n--- Result ---\n");

    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
