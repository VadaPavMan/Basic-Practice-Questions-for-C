#include <stdio.h>
#include <string.h>
#include <conio.h>

// Structure Program
struct student
{
    char name[45];
    int age;
    float gpa;
};

void displayname(struct student name)
{
    printf("The Name: %s\n", name.name);
    printf("The Age: %d\n", name.age);
    printf("The Gpa: %.2f\n", name.gpa);
}

int main()
{

    struct student name1 = {"Vadapavman", 21, 8.33};
    struct student name2 = {"Hubster", 18, 3.33};

    displayname(name1);
    displayname(name2);
    return 0;
}
