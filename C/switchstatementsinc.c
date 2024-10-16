#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade='A';
    printf("Enter your grade: ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("You did excellent.\n");
        break;
    case 'B':
        printf("You did good.\n");
        break;
    case 'C':
        printf("You can do better.\n");
        break;
    case 'D':
        printf("You did bad.\n");
        break;
    case 'E':
        printf("You did poor.\n");
        break;
    case 'F':
        printf("You failed the course.\n");
        break;
    
    }

    return 0;
}
