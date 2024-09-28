#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    FILE *ptrfile = fopen("user_info.txt", "a");

    char user_name[100];
    int user_age, prompt = 1;  // Initialize prompt
    char user_email[100];

    while (prompt != 0)
    {
        printf("Enter Name: ");
        scanf("%s", user_name);  // No need for &
        printf("Enter Email: ");
        scanf("%s", user_email);  // No need for &
        printf("Enter Age: ");
        scanf("%d", &user_age);

        // Write user information to the file
        fprintf(ptrfile, "Name: %s\n", user_name);
        fprintf(ptrfile, "Age: %d\n", user_age);
        fprintf(ptrfile, "Email: %s\n", user_email);
        fprintf(ptrfile, "\n");

        printf("If you want to exit the program Press [0], else [1]: ");
        scanf("%d", &prompt);
    }

    fclose(ptrfile);  // Close file after loop ends
    return 0;
}
