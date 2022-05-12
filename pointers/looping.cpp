#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,6,7,8};
    int* ptr,i=1;
    for(ptr =arr;ptr<&arr[5];ptr++)
   cout<<"arr["<<i++<<"] : "<<*ptr<<endl;
   return 0;
}