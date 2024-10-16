#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    /* code */
    // char charactername[]="John";
    // int characterage=35;

    // printf("Hello, World!\n");

    // printf("There once was a man named %s.\n",charactername);

    // printf("He was %i years old.\n",characterage);

    // printf("He really liked the name %s\n",charactername);

    // printf("but did not like being %i.\n",characterage);


    // int age= 40;
    // float age1=30.08797;
    // double gpa=9.9;
    // char grade='A';
    // char str[]="hello";
    // const int num = 45;
    

    // printf("gpa is: %.2f and grade is: %c and also %s.\n",gpa,grade,str);
    // printf("%f\n",8.9990009876544);
    // printf("%.1f",8.0);

    // printf("%.1f\n",pow(2, 4));
    // printf("%.2f\n",pow(2, 4));
    // printf("%d",num);


    // int age;//defining variable to store input in
    // printf("Enter your age:");//displaying the prompt
    // scanf("%d",&age);//taking the input and storing it in the 'age' variable
    // printf("your age is %d.",age);//printing the value inputted by the user from age variable to the terminal

    // float cpi;//defining variable to store input in
    // printf("Enter your cpi:");//displaying the prompt
    // scanf("%f",&cpi);//taking the input and storing it in the 'cpi' variable
    // printf("your cpi is %.2f.",cpi);//printing the value inputted by the user from cpi variable to the terminal



    char name[30];
    printf("Enter your name:");
    fgets(name, 30,stdin);
    printf("Your name is %s",name);





    double a;
    double b;
    printf("enter first number: ");
    scanf("%lf",&a);
    printf("enter second number: ");
    scanf("%lf",&b);

    printf("The sum of the given two numbers is: %.2lf", a+b);


    return 0;
}

