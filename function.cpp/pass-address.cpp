#include<iostream>
using namespace std;
int* add_ten(int* data);
int main()
{
    int arr[]={5,4,6,7,8};
    int* result;
    result=add_ten(arr);

    for(int i=0;i<5;i++)
    cout<<*(result+i)<<" ";
    return 0;
}
int* add_ten(int*data)
{
    for(int i=0;i<5;i++)
    *(data+i)=*(data+i)*10;
    return data;
}