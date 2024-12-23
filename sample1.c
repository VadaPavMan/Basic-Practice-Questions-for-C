#include <stdio.h>

int add(int a ,int b)
{
    return a+b;
}

int sub(int a ,int b)
{
    return a-b;
}

int div(int a ,int b)
{
    return a/b;
}

int mul(int a ,int b)
{
    return a*b;
}

int mod(int a ,int b)
{
    return a%b;
}

int main() {

    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("The Addition Of Both Numbers: %d\n", add(number1, number2));
    printf("The Subtraction Of Both Numbers: %d\n", sub(number1, number2));
    printf("The Multiplication Of Both Numbers: %d\n", mul(number1, number2));
    printf("The Division Of Both Numbers: %d\n", div(number1, number2));
    printf("The Addition Of Both Numbers: %d\n", mod(number1, number2));

    return 0;
}
