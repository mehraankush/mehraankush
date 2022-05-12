#include<iostream> 
using namespace std;
int   main()
{
    int arr[]={4,3,5,6,9,8};
    cout<<"3 element is : "<<*(arr+2)<<endl;
    cout<<"3 element address is : "<<(arr+2)<<endl;

    for(int i = 0;i<6;i++)
    cout<<"value of arr["<<i<<"] is :"<<*(arr+i)<<endl;
    for(int i = 0;i<6;i++)
    cout<<"address of arr["<<i<<"] is :"<<(arr+i)<<endl;
    *(arr+2)=100;
    cout<<"3 element is : "<<*(arr+2)<<endl;
    cout<<"3 element address is : "<<(arr+2)<<endl;
    return 0;

}
