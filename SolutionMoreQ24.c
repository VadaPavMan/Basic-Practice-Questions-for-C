#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Address
{
    char city[50];
    int pincode;
};

struct employee
{
    char name[50];
    int id;
    struct Address address;
};

void display(struct employee emp[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Details of the employee %d\n", i + 1);
        printf("The Name: %s\n", emp[i].name);
        printf("The ID: %d\n", emp[i].id);
        printf("The Adress [City, Pincode]: ", emp[i].address.city, emp[i].address.pincode);
    }
}

int main()
{
    struct employee emp[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the details for employee %d\n", i + 1);

        printf("Name: ");
        getchar();
        fgets(emp[i].name, 50, stdin);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("City: ");
        getchar();
        fgets(emp[i].address.city, 50, stdin);

        printf("Pincode: ");
        scanf("%d\n", &emp[i].address.pincode);
    }

    display(emp, 2);
}
