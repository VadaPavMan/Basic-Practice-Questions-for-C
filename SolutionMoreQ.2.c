#include <stdio.h>

int main() {
    char letter; int lettervalue;
    printf("Enter the character: ");
    scanf("%c", &letter);

    lettervalue = letter; 

    if (lettervalue >= 97 && lettervalue <= 122){
        printf("The Letter %c is a lowercase letter.", letter);
    }
    else if (lettervalue >= 65 && lettervalue <= 90)
    {
        printf("The Letter %c is a uppercase letter.", letter);
    }
    else{
        printf("The %c is not a letter.", letter);
    }
    
    return 0;
}
