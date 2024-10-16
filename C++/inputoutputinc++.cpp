#include <iostream>
#include <string>

int main()
{   
    // char firstname[20];
    // char lastname[20];
    // int age;

    // //basic way to store the fullname 
    // std::cout<<"Please Enter Your firstname: ";
    // std::cin >> firstname;

    // std::cout<<"Please Enter Your lastname: ";
    // std::cin >> lastname;

    // std::cout<<"Please Enter Your Age: ";
    // std::cin >> age;

    // std::cout<<"Your Name is "<<firstname<<" "<<lastname<<" and you are "<<age<<" years old." <<std::endl;


    //advanced way to store fullname in one go is to use <string> library in c++

    // std::string name;//creates varible to store strings 

    // int age1;
    // std::cout<<"Enter Your Name and Age with a single space between them: ";
    // std::cin>>name>>age1;//store first string in name and second in age1
    // std::cout<<"Your name is "<<name<<" and you are "<<age1<<" years old."<<std::endl;


    std::string full_name;
    int age3;
    
    std::cout<<"Enter Your Fullname: ";
    
    std::getline(std::cin,full_name);
    std::cout<<"Enter Your Age: ";
    std::cin>>age3;

    std::cout<<"Your name is "<<full_name<<" and your age is "<<age3<<std::endl;


    return 0;
}
