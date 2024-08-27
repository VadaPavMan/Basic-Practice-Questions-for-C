#include <stdio.h>
#include <conio.h>

float areaRectangle(float length, float width)
{
    float area;
    area = length * width;
    printf("The area of rectangle is: %.2f", area);
}

float areaCircle(float radius)
{
    float area;
    area = 3.14 * radius * radius;
    printf("The area of circle is: %.2f", area);
}

int main()
{
    float length, width;
    printf("Calculate the area of rectangle.\n");
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the width: ");
    scanf("%f", &width);

    areaRectangle(length, width);
    getch();

    float radius;
    printf("\nCalculate the area of circle.\n");
    printf("Enter the radius: ");
    scanf("%.2f", &radius);

    areaCircle(radius);
    return 0;
}
