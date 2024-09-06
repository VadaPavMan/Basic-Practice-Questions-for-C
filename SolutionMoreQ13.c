#include <stdio.h>

int funMinMax(int arr[], int size, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }

    return 0;
}

int main()
{

    int array[] = {1, 5, 3, 8, 9, 10};

    int size = sizeof(array) / sizeof(array[0]);

    int max, min;

    funMinMax(array, size, &max, &min);

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    return 0;
}
