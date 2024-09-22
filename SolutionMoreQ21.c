#include <stdio.h>

int main()
{

    char string[100];
    int len = 0;

    printf("Enter a string here: ");
    fgets(string, sizeof(string), stdin);

    while (string[len] != '\0')
    {
        len++;
    }

    len--;

    printf("The length of the string is: %d", len);
    return 0;
}
