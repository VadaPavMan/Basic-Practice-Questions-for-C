#include <stdio.h>

int fibonacci(int n);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The fibonacci number at positoins %d is %d\n", num, fibonacci(num));
    return 0;
}
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
