#include <stdio.h>
#include <math.h>

int factorial(int n);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int Nm1 = factorial(n - 1);
    int Num = Nm1 * n;
    return Num;
}
