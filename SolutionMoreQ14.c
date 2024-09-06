#include <stdio.h>

int main()
{
    int arr[5] = {3, 5, 7, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++, end--;
    }

    for (int j = 0; j < 5; j++)
    {
        printf("The revese form of array is %d\n", arr[j]);
    }
    return 0;
}
