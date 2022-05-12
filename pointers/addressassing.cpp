#include<iostream>
using namespace std;
int main()
{
    int*ptr, a=5;
    ptr=&a;
    cout<<"address is : "<<ptr<<endl;
    cout<<"address is : "<<&a<<endl;
    cout<<"value is   : "<<a<<endl;
    cout<<"value is   : "<<*ptr<<endl;
    *ptr=22;
    cout<<"value is : "<<*ptr<<endl;
    cout<<"value is : "<<a<<endl;
    return 0;
}