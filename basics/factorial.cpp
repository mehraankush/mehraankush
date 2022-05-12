#include<iostream>
using namespace std;

int main()
{
    int num,sum=1;

     cout << "enter a number :";
    cin >> num;


    for(int i=2;i<=num;i++)
        sum*=i;

    cout<<"factorial is: "<<sum;
    return 0;
}