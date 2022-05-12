#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int result =rename("sample.text","testcase.text");

    if(result==0)
    {
        cout<<"success";
    }
    else {cout<<"fail";}
    return 0;
}