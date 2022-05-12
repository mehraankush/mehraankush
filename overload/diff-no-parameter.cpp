#include<iostream>
using namespace std;

int calculate(int a,int b)
{return (a+b);}

int calculate(int a,int b,int c)
{return (a+b+c);}

int main()
{
    cout<<calculate(54,56)<<endl<<calculate(56,55,43);
    return 0;
}