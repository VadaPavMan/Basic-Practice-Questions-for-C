#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    float salary;
    char name[100];
    FILE *ptr;
    ptr = fopen("Employee.txt", "a");

    printf("Enter the name: ");
    scanf("%s", &name);

    printf("Enter the salary: ");
    scanf("%f", &salary);

    fprintf(ptr, "Name: %s", name);
    fprintf(ptr, ", Salary: %.2f \n", salary);

    fclose(ptr);
    return 0;
}
