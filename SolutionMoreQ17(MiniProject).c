#include <stdio.h>

int main()
{
    int students; // will store number of students. 
    printf("Enter the number of students: ");
    scanf("%d", &students);

    int grade[students]; //array capacity.
    for (int i = 0; i < students; i++)
    {
        printf("Enter the grades of student no.%d: ", i + 1);
        scanf("%d", &grade[i]);
    }

    float avg; //average
    int sum_of_grades = 0; 
    for (int i = 0; i < students; i++)
    {
        sum_of_grades += grade[i];
    }

    avg = sum_of_grades / (float)students; // for more precision.

    printf("The average grade or sum of all the students grade is: %.2f\n", avg); //

    int max = grade[0]; //to store the highest grade.
    int min = grade[0]; //to store the lowest grade.

    for (int i = 0; i < students; i++)
    {
        if (max < grade[i])
        {
            max = grade[i];
        }
        if (min > grade[i])
        {
            min = grade[i];
        }
    }

    printf("The highest grade is: %d\n", max);
    printf("The lowest grade is: %d\n", min);
    return 0;
}
