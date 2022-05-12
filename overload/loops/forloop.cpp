//sum of natural numbers
#include<iostream>
using namespace std;

int main()
{
    int num,sum=0;
     cout << "enter a number :";
    cin >> num;
    for(int i=1;i<=num;i++)
      sum+=i;
    cout<<"sum is :"<<sum;
    return 0;
}