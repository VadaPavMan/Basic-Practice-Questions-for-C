#include <stdio.h>

int main()
{

    int arr[10], sum = 0;

    printf("Enter the number: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (i == 9)
        {
            break;
        }
        printf("Enter the number: ");
    }

    for (int j = 0; j < 10; j++)
    {
        sum += arr[j];
    }

    printf("The total sum of all numbers is: %d", sum);
    return 0;
}
