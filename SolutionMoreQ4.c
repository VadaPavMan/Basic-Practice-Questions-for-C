#include <stdio.h>

int main()
{
    int row;

    do
    {
        printf("Enter the how many rows you want: ");
        scanf("%d", &row);
    } while (row < 0);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
