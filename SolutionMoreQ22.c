#include <stdio.h>
#include <string.h>
#include <conio.h>


void decrypt(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }

    printf("Decrypted from of string: %s\n", str);
}

int main()
{
    char string[100];
    printf("Enter the string here: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < strlen(string); i++)
    {
        string[i] = string[i] + 1;
    }

    printf("\nEncrypted form of string: %s\n", string);
    decrypt(string);
}
