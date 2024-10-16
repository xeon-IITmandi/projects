#include <iostream>

double num1,num2;
char op,ans;

void calc(void)
{
    std::cout<<"---CALCULATOR---"<<std::endl<<std::endl;

    std::cout<<"enter first number: ";
    std::cin>>num1;   

    std::cout<<"enter operator: ";
    std::cin>>op;   

    std::cout<<"enter second number: ";
    std::cin>>num2;   

    if (op=='/' && num2==0)
    {
        std::cout<<"ZERO DIVISION ERROR: Division by zero is forbidden."<<std::endl;
        calc();

    }

    if(op=='+')
    {
        std::cout<<"Result: "<<num1+num2<<std::endl;
    }

    else if(op=='-')
    {
        std::cout<<"Result: "<<num1-num2<<std::endl;
    }

    else if(op=='*')
    {
        std::cout<<"Result: "<<num1*num2<<std::endl;
    }

    else if(op=='/')
    {
        std::cout<<"Result: "<<num1/num2<<std::endl;
    }

    else
    {
        std::cout<<"INVALID OPERATOR."<<std::endl;
    }


    std::cout<<"Do you want to continue using the calculator?(y/n): ";
    std::cin>>ans;

    if(ans=='y')
    {
        calc();
    }
    else if(ans=='Y')
    {
        calc();
    }
    else if(ans=='n')
    {
        std::cout<<"Exiting...."<<std::endl;
        std::cout<<"Program exited successfully."<<std::endl;
        exit;
    }
    else if(ans=='N')
    {
        std::cout<<"Exiting...."<<std::endl;
        std::cout<<"Program exited successfully."<<std::endl;
        exit;
    }
    else
    {

        std::cout<<"Try Again."<<std::endl;
        //problem here is that we again want to ask for the line 52 and store input and then run the conditionals. maybe we have to keep the conditionals inside a new function and call them once at the midway of calc() func and once here . nvm the calc() seems to works just fine . 

    }
    




}

int main()
{
    calc();
    
    return 0;
}
