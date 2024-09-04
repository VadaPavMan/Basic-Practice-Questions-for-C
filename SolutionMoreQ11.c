#include <stdio.h>

int *sum(int a, int b);
float *average(int a, int b);

int *sum(int a, int b)
{
    int s = a + b;
    int *ptr1 = &s;
    printf("The sum of both the values is: %d\n", s);

    return ptr1;
}

float *average(int a, int b)
{
    int s = a + b;
    float avg = s / 2.0;
    float *ptr2 = &avg;
    printf("The average of both the values is: %.2f\n", avg);

    return ptr2;
}
int main()
{

    int x, y;
    int *p1 = sum;
    float *p2 = average;
    printf("Enter 2 numbers here: ");
    scanf("%d %d", &x, &y);

    sum(x, y);
    average(x, y);

    printf("The address of sum and average is %u and %u\n", *p1, *p2);
    return 0;
}
