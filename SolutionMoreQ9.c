#include <stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int temp = *a; // This will hold the value of a temporarly.
    *a = *b;       //  Assign the value pointed to by b to the location pointed to by a
    *b = temp;     //  Assign the value pointed to by a to the location pointed to by b
}

int main()
{

    int x = 55, y = 66;

    // Call the function, and pass the address of x and y.

    swap(&x, &y);

    printf("The swaping value of both the x and y is : %d and %d\n", x, y);

    return 0;
}
