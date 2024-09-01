#include <stdio.h>

int main() {
    float z = 8.9;     // Declare a float variable z and initialize it with 8.9
    float *p = &z;     // Declare a pointer p that points to z

    // Print the value of z using the pointer dereference and the variable name
    printf("The value of z using the variable: %.1f\n", z);
    printf("The value of z using the pointer: %.1f\n", *p);

    return 0;
}
