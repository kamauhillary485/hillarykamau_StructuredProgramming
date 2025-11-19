#include <stdio.h>

int main() {
    float radius, surfaceArea;
    const float PI = 3.14159;

    // Input: radius of the sphere
    printf("Enter the radius of the sphere: ");
    while (scanf("%f", &radius) != 1 || radius <= 0) {
        printf("Invalid input! Please enter a positive number for radius: ");
        while (getchar() != '\n'); // clear input buffer
    }

    // Calculation: Surface area
    surfaceArea = 4 * PI * radius * radius;

    // Output
    printf("The surface area of the sphere is: %.2f\n", surfaceArea);

    return 0;
}
