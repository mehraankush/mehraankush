#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of students :";
    cin>>n;
    float* num=new float[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" CGPA :"<<endl;
        cin>>*(num+i);
    }
    for(int i=0;i<n;i++)
        cout<<"CGPA is : "<<*(num+i)<<endl;
   delete[] num;
   return 0;
}