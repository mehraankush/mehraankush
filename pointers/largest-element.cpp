#include<iostream>
using namespace std;
int main()
{
    int n;
    int* num=new int[n];
    cout<<"enter the num of elements : ";
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" element : ";
        cin>>*(num+i);
    }
    int largest;
    largest =*num;
    for(int i =0;i<n;i++)
        if(num[i]>largest)
        largest =*(num+i);
    cout<<"largest element is : "<<largest;
    delete[] num;
    return 0;
    
}