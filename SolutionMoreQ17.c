#include <stdio.h>

int main() {
    int a, b, c;
    float result;

    // Input three integers
    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Perform the calculation
    result = (a / b) + (float)(a + b) / c;

    // Display the result with two decimal places
    printf("Result: %.2f\n", result);

    return 0;
}
