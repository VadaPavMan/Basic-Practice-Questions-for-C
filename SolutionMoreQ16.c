#include <stdio.h>

int main()
{

    int row = 1, col, number;
    printf("Enter the number: ");
    scanf("%d", &number);

    while (row <= number)
    {
        col = 1;
        while (col <= number)
        {
            if ((row + col) % 2 == 0)
            {
                printf("X ");
            }
            else
            {
                printf("O ");
            }
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}
