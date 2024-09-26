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
    printf("The price: $%.2f\n", car.price);
    printf("\n");
}
int main()
{
    Vehicle car1 = {"Toyota Corolla", 2015, 15000.2};
    Vehicle car2 = {"Honda Civic", 2020, 20000.2};

    display(car1);
    display(car2);
    return 0;
}
