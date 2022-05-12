#include<iostream>
using namespace std;
int main()
{
    void* ptr;   //if we had taken any data type other than void then we couldn't assigh the ptr =&a (wrong)
    float a=5.4;  
    ptr =&a;    //for assing this both the variabls must be same datatype
    cout<<"address is :"<<ptr<<endl;
    cout<<"value is :"<<&a;
  return 0;
}