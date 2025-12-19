#include <stdio.h>

// Function prototypes for Task 5 and Task 6
void swapNumbers(int *ptr1, int *ptr2);
void incrementByValue(int num);
void incrementByReference(int *num);

int main() {
    printf("=== TASK 2: Display Address of a Variable ===\n");
    // Task 2: Display Address of a Variable
    int num = 10;
    int *ptr = &num;
    
    printf("Value of num: %d\n", num);
    printf("Address of num (value stored in ptr): %p\n", (void*)ptr);
    printf("Value accessed using *ptr (dereferenced value): %d\n", *ptr);
    printf("\n");

    printf("=== TASK 3: Access Variable Value Using Pointer ===\n");
    // Task 3: Access Variable Value Using Pointer
    int count = 10;
    int *pCount = &count;
    
    printf("Original value of count: %d\n", count);
    *pCount = 20;  // Modify value using pointer
    printf("Updated value of count: %d\n", count);
    printf("\n");

    printf("=== TASK 4: Add Two Numbers Using Pointers ===\n");
    // Task 4: Add Two Numbers Using Pointers
    int num1 = 15, num2 = 25;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int sum;
    
    sum = *ptr1 + *ptr2;  // Add using pointer dereferencing
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Sum using pointers: %d\n", sum);
    printf("\n");

    printf("=== TASK 5: Swap Two Numbers Using Pointers ===\n");
    // Task 5: Swap Two Numbers Using Pointers
    int a = 5, b = 10;
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swapNumbers(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    printf("\n");

    printf("=== TASK 6: Pass by Value vs Pass by Reference ===\n");
    // Task 6: Pass by Value vs Pass by Reference
    int number = 5;
    
    printf("Original value: %d\n", number);
    
    // Pass by value
    incrementByValue(number);
    printf("After incrementByValue (pass by value): %d\n", number);
    
    // Pass by reference
    incrementByReference(&number);
    printf("After incrementByReference (pass by reference): %d\n", number);

    return 0;
}

// Task 5: Swap function
void swapNumbers(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// Task 6: Functions for pass by value vs pass by reference
void incrementByValue(int num) {
    num++;  // This only changes the local copy
}

void incrementByReference(int *num) {
    (*num)++;  // This changes the actual variable
}