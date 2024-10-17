#include <iostream>

int main()
{
    // int age;
    // std::cout<<"Enter Your Age: ";
    // std::cin>>age;

    // switch(age)
    // {
    //     case 18:
    //     {
    //         std::cout<<"You are "<<age<<" years old.\n";
    //     }
    //     break;
    //     case 50:
    //     {
    //         std::cout<<"You are "<<age<<" years old.\n";
    //     }
    //     break;
    //     case 100:
    //     {
    //         std::cout<<"You are "<<age<<" years old.\n";
    //     }
    //     break;
    //     default:
    //     {
    //         std::cout<<"Age Unknown.\n";
    //     }
    //     break;
    // }

    //using ternary operators

    // char result;
    // std::cout<<"Enter Result (Y/N): ";
    // std::cin>>result;
    

    // result=='Y' ? std::cout<<"YES" : std::cout<<"NO" ;


    int a,b,max;

    std::cout<<"Enter value of a: ";
    std::cin>>a;

    
    std::cout<<"Enter value of b: ";
    std::cin>>b;

    max= (a>b)? a:b;

    std::cout<<"max: "<<max<<std::endl;

    return 0;
}
