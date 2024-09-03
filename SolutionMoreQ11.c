#include <stdio.h>

int fun(int *a)
{
   *a = *a * 10; // Multiplies by 10 to get the 10 times of any number.
}

int main()
{
   int x, *y = &x;
   printf("Enter the value here: ");
   scanf("%d", &x);

   printf("The value of the variable x is: %d\n", x);
   fun(&x); // Calling the function named fun here.
   printf("The value of the variable x is: %d\n", x); // Call by reference will change the value of x
   return 0;
}
