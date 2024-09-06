#include <stdio.h>

int main() {
    int arr[10]; // Corrected array size to 10

    // Initialize array elements
    for(int i = 0; i < 10; i++) {
        arr[i] = i + 1; // Assign values from 1 to 10
    }

    // Print array elements
    for(int j = 0; j < 10; j++) {
        printf("The element at index %d is: %d\n", j, arr[j]);
    }

    return 0;
}
