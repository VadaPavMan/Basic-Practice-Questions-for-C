#include <stdio.h>

// 5 Questions for practice.. To improve in C.

// Q.1 Find a area of circle. Formula: A=πr2 (2 is square)

int main()
{
    float radius;
    printf("Calculate the area of a circle\n Enter a the radius: ");
    scanf("%f", &radius);

    float area_of_circle = 3.14 * radius * radius;
    printf("Area of the circle is: %f", area_of_circle);

    return 0;
}

// Q.2 Find the volume of cylinder. Formula: A=πr2h (2 is square)

int main()
{
    float radius;
    printf("Calculate the volume of cylinder\nEnter the radius: ");
    scanf("%f", &radius);

    float height;
    printf("Enter The Height: ");
    scanf("%f", &height);

    float volume_of_cylinder = 3.14 * radius * radius * height;
    printf("Volume of cylinder is: %f", volume_of_cylinder);

    return 0;
}

// Q.3 Perimter of a rectangle. Formula: perimeter= 2 x (width+height)

int main()
{

    float width, height;
    printf("Calculate perimeter of rectangle\nEnter the width of rectangle: ");
    scanf("%f", &width);

    printf("Enter the height of rectangle: ");
    scanf("%f", &height);

    float perimeter = 2 * (width + height);
    printf("The perimeter of rectangle is: %2f", perimeter);

    return 0;
}

// Q.4 Convert Temperature from Fahrenheit to Celsius. Formula: °C = 5/9 x (°F - 32)

int main()
{
    float fahrenheit, celsius;
    printf("Convert Temperature from Fahrenheit to Celsius\nEnter the fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 / 9.0 * (fahrenheit - 32);
    printf("Celsius converted from fahrenheit : %f", celsius);

    return 0;
}

// Q.5 Calculate Simple Interest. Formula: Simple Interest= P×R×T/100

int main()
{
    float principal, rate, time;
    printf("Calculate the simple interest\nEnter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period: ");
    scanf("%f", &time);

    float simple_interest = principal * rate * time / 100;
    printf("Simple interest is: %.2f", simple_interest);

    return 0;
}
