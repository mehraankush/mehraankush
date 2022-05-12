#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
      cout<<"&x["<<i<<"]: "<<(arr+i)<<endl; //&arr[i] is equavalent to (arr+i)
    }
    cout<<"adress of array :"<<&arr;
    return  0;
}