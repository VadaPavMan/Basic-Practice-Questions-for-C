#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

typedef struct
{
    char name[50];
    int eng, maths, sci, total;
    float per;
    
} students;

int main()
{
    students studarr[3] = {1, 2, 3};

    int i = 0;
    while (i < 3)
    {
        printf("Enter the name of student: ");
        scanf(" %s", &studarr[i].name);

        printf("Enter the marks got in english: ");
        scanf("%d", &studarr[i].eng);

        printf("Enter the marks got in maths: ");
        scanf("%d", &studarr[i].maths);

        printf("Enter the marks got in science: ");
        scanf("%d", &studarr[i].sci);

        i++;
    }

    for (int i = 0; i < 3; i++)
    {
        studarr[i].total = studarr[i].eng + studarr[i].maths + studarr[i].sci;

        studarr[i].per = ((float)studarr[i].total / 300.0) * 100;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Result percentage of %s : %.2f \t", studarr[i].name, studarr[i].per);
        if (studarr[i].per < 40.0)
        {
            printf("Failed\n");
        }
        else
        {
            printf("Passed\n");
        }
    }
    return 0;
}
