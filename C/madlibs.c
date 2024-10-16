#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    char color[30];
    char Plural_Noun[30];
    char Celebrity[30];



    printf("Roses are {color},\n");
    printf("{Plural_Noun} are Blue,\n");
    printf("I love {Celebrity}.\n\n");


    printf("Enter color: ");
    fgets(color,30,stdin);
    color[strcspn(color, "\n")] = '\0';
    printf("Enter Plural_Noun: ");
    fgets(Plural_Noun,30,stdin);
    Plural_Noun[strcspn(Plural_Noun, "\n")] = '\0';
    printf("Enter Celebrity: ");
    fgets(Celebrity,30,stdin);
    Celebrity[strcspn(Celebrity, "\n")] = '\0';//used to find the newline-\n and replace it with \0 which is null terminator used to mark the end of a string.



    printf("Roses are %s,\n",color);
    printf("%s are Blue,\n",Plural_Noun);
    printf("I love %s.\n",Celebrity);

    char char1[50];
    char char2[50];
    printf("This is demo,plz enter 2 words: ");
    scanf("%s%s",char1,char2);//this could give error if user doesnt input exactly 2 strings.
    printf("This is %s %s",char1,char2);
    

    return 0;
}
