#include <stdio.h>
#include <math.h>
void sayhi();
int main()
{
    // nums_array[0]=2000;
    // printf("%d,%d",nums_array[0],nums_array[4]);
    
    


    //making a new array containing the squares of the elements of  nums_array

    int nums_array[]={1,2,3,4};
    int nums_square_array[4];

    int i=0;
    while (i<4)
    {
        nums_square_array[i]=pow(nums_array[i],2);
        i++;
    }

    for (int i=0;i<4;i++)
    {
        printf("(%d,%d)\n",nums_array[i],nums_square_array[i]);
        
    }

    printf("\nprogram executed succesfully\n");

    sayhi();

    return 0;
    
}

//making new functions

void sayhi()
{
    char firstname[15];
    char lastname[15];
    printf("enter your firstname: ");
    scanf("%s",&firstname);

    printf("enter your lastname: ");
    scanf("%s",&lastname);

    printf("Hello,%s %s",firstname,lastname);
}