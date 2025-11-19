#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    // Input: get string from user
    printf("Enter your name: ");
    scanf("%99s", name);  // prevents buffer overflow

    // Optional: ensure string is not empty
    while (strlen(name) == 0) {
        printf("Invalid input! Please enter a valid name: ");
        scanf("%99s", name);
    }

    // Output: print the string and its length
    printf("You entered: %s\n", name);
    printf("Length of the string: %zu characters\n", strlen(name));

    return 0;
}
