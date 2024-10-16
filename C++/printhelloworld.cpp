#include <iostream>//this copies code from iostream to this program

int add( int firstnumber,int secondnumber)
{
    return firstnumber+secondnumber;
}
// int add( int firstnumber,int secondnumber);
int main()//this is the main function
{
    /*this is how 
    
    u add multiline comment
    
    
    */
    // std::cout<<"XEON" <<std::endl; 
    // std::cout<<"Hello World!"<<std::endl;
    int firstnumber=30;
    int secondnumber=40;

    std::cout<<"The sum of the two numbers is: "<<add(firstnumber,secondnumber) <<std::endl;
    
    return 0;
}


