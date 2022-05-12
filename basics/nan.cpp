#include<iostream>

int main()
{
    double num1 {6.9};
    double num2 {};  //initillize with zero
    double num3 {};
    
    double result {num2/num3};  //nan 0/0

    std::cout<<result<<std::endl;
    std::cout<<result+num1<<std::endl;
    std::cout<<num1/num2<<std::endl;   //infinite
    return 0;
}