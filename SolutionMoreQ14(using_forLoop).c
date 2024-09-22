#include <stdio.h>

void printarray(int arr[], int size);

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("The element at address %d is: %d\n", i, arr[i]);
    }
}

void reversed(int arr[], int size);

void reversed(int arr[], int size)
{
    int temp, start = 0, end = size - 1;
    for (start; start < end; start++)
    {
        temp = arr[start];
        arr[start] = arr[size - start - 1];
        arr[size - start - 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("The element at address %d is: %d\n", i, arr[i]);
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, size);
    reversed(arr, size);

    return 0;
}
