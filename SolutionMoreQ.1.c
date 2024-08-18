#include <stdio.h>

int main() {
    int eng, mth, sci; float percentage, total;
    printf("Enter the marks obtained in English(out of 100): ");
    scanf("%d", &eng);

    printf("Enter the marks obtained in Maths(out of 100): ");
    scanf("%d", &mth);
    
    printf("Enter the marks obtained in Science(out of 100): ");
    scanf("%d", &sci);

    total= eng+mth+sci;
    total= total/300;
    percentage=total*100;

    if (percentage >= 40 && eng,mth,sci >=33){
        printf("You Passed The Exam With %.2f Percentage", percentage);
    }
    else if (percentage <40 || eng,mth,sci >=33)
    {
        printf("You Got Less Then 40%%, Your Percentage is: %.2f", percentage);
    }
    else if (percentage >=40 && eng,mth,sci <33)
    {
        printf("You Have Failed In Subject And Your Percentage is: %.2f", percentage);
    }
    else{
        printf("You Have Failed The Exam With %.2f Percentage", percentage);
    }
    return 0;
}
