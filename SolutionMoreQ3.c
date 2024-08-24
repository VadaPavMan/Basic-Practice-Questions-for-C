#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers is: %d", num, sum);
    return 0;
}
