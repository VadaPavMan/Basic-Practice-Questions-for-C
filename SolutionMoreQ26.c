#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    FILE *pF = fopen("asset//output.txt", "w");

    char userinput[100];
    printf("Enter the string you want to store: ");
    fgets(userinput, sizeof(userinput), stdin);

    fputs(userinput, pF);

    fclose(pF);
}
