#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double num {6.9};
    int num2 {-456};
    double num3 =exp(10);

    cout<<"round of to lower :"<<floor(num)<<endl
        <<"round of to upper :"<<ceil(num)<<endl
        <<"print the positive :"<<abs(num2)<<endl
        <<"print exponent  :"<<num3<<endl
        <<"power of number  :"<<pow(3,4)<<endl
        <<"log of number  :"<<log(56.4)<<endl
        <<"square root of number  :"<<sqrt(10000)<<endl
        <<"round of to nearest number :"<<round(num)<<endl;
    return 0;
}