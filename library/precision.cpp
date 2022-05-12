#include<iostream>
#include<iomanip>
using namespace  std;

int main()
{
    double num1 {234.4333};
    double num2 {2002.2};
    double num3 {3.4e-10};

    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<"     "<<endl;
cout<<scientific;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<"     "<<endl;
cout<<fixed;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<"     "<<endl;
cout<<setprecision(6);
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<"     "<<endl;
    return 0;
}