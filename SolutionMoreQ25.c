#include <stdio.h>
#include <string.h>
#include <conio.h>

// Typedef Structure Program

struct Car
{
    char model[50];
    int year;
    float price;
};

typedef struct Car Vehicle;

void display(Vehicle car)
{
    printf("The model name: %s\n", car.model);
    printf("The year of launch: %d\n", car.year);
    printf("The price: %.2f\n", car.price);
    printf("\n");
}
int main()
{
    Vehicle car1 = {"lavdekamodel", 1999, 9999.2};
    Vehicle car2 = {"jhatkabal", 1995, 8888.2};

    display(car1);
    display(car2);
    return 0;
}
