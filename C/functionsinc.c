#include <stdio.h>

float a;
float b;
float c;


void compare(float a,float b,float c);


void compare(float a,float b,float c)
{
    printf("Enter firstnumber: ");
    scanf("%f",&a);

    printf("Enter secondnumber: ");
    scanf("%f",&b);

    printf("Enter thirdnumber: ");
    scanf("%f",&c);




    if (a>b)
    {
        if (a>c)
        {
            printf("the greatest of the three numbers is: %f",a);
        }
        else if(a==c)
        {
            printf("the greatest of the three numbers is: %f",a);
        }
        else
        {
            printf("the greatest of the three numbers is: %f",c);
        }
    }
    else if(a<b)
    {
        if (b>c)
        {
            printf("the greatest of the three numbers is: %f",b);
        }
        else if(b==c)
        {
            printf("the greatest of the three numbers is: %f",b);
        }
        else
        {
            printf("the greatest of the three numbers is: %f",c);
        }
    }
    else
    {
        if (a>c)
        {
            printf("the greatest of the three numbers is: %f",a);
        }
        else if(a<c)
        {
            printf("the greatest of the three numbers is: %f",c);
            
        }
        else
        {
            printf("All numbers are equal.\n");
        }
    }
}



int main()
{

    compare(a,b,c);

    
    return 0;
}


