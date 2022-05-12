#include<iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;

    int arr=new int[n];
    for(int i=0;i<n;i++)
    {
         cout<<"Address of arr["<<(i+1)<<"] is :"<<(arr+i)<<endl;
    }

    delete[] arr;
    return 0;

}
