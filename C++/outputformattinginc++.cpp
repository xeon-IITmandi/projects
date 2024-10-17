#include <iostream>
#include <ios>//required for output formatting
#include <iomanip>//required for output formatting

int main()
{
    // std::cout<<"Testing  for new line."<<std::endl;
    // std::cout<<"Testing  for new line.\n";
    // std::cout<<"newline came";

    //making a frequency table for some values
    // int col_w;

    // std::cout<<"Enter column width: "<<std::flush;
    // std::cin>>col_w;

    // std::cout << std::right;
    // std::cout << std::setfill('-');
    // std::cout << std::setw(col_w) << "VALUE" << std::setw(col_w) << "FREQUENCY\n";
    // std::cout << std::setw(col_w) << "1"<<std::setw(col_w) << "1\n";
    // std::cout << std::setw(col_w) << "2"<<std::setw(col_w) << "11\n";
    // std::cout << std::setw(col_w) << "3"<<std::setw(col_w) << "111\n";
    // std::cout << std::setw(col_w) << "4"<<std::setw(col_w) << "1111\n";
    // std::cout << std::setw(col_w) << "5"<<std::setw(col_w) << "11111\n";
    // std::cout << std::setw(col_w) << "6"<<std::setw(col_w) << "111111\n";


    // bool True=true;
    // bool False=false;

    // std::cout<<std::boolalpha;
    // std::cout<<"when boolalpha,"<<"True: "<<True<<std::endl;//true
    // std::cout<<"when boolalpha,"<<"False: "<<False<<std::endl;//false

    // std::cout<<std::noboolalpha;
    // std::cout<<"when noboolalpha,"<<"True: "<<True<<std::endl;//1
    // std::cout<<"when noboolalpha,"<<"False: "<<False<<std::endl;//0


    // int num1=34;
    // int num2=-68;

    // std::cout<<std::showpos;
    // std::cout<<"when showpos,"<<"num1: "<<num1<<std::endl;
    // std::cout<<"when showpos,"<<"num2: "<<num2<<std::endl;

    // std::cout<<std::noshowpos;
    // std::cout<<"when noshowpos,"<<"num1: "<<num1<<std::endl;
    // std::cout<<"when noshowpos,"<<"num2: "<<num2<<std::endl;


    // int num_1=717171;
    
    // std::cout<<""<<num_1<<" in decimal: "<<std::dec<<num_1<<std::endl;
    // std::cout<<""<<num_1<<" in octal: "<<std::oct<<num_1<<std::endl;
    // std::cout<<""<<num_1<<" in hexadecimal: "<<std::uppercase<<std::hex<<num_1<<std::endl;

    // double a=7647647645885875;
    
    // std::cout<<"a (scientific):"<<std::scientific<<a<<std::endl;
    // std::cout<<"a (fixed):"<<std::fixed<<std::setprecision(8)<<a<<std::endl;
    // std::cout<<"a (default):"<<std::setprecision(6)<<a<<std::endl;
    
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);//hack to set notation to default

    // double a=34.23;
    // std::cout<<"a(showpoint): "<<std::showpoint<<a<<std::endl;
    // std::cout<<"a(noshowpoint): "<<std::noshowpoint<<a<<std::endl;
    // std::cout<<"a(default): "<<a<<std::endl;

    

    return 0;
}
