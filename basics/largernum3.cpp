#include<iostream>
using namespace std;

int main()
{   
    int a,b,c;
    cout << "enter a :";
    cin >> a;
    cout << "enter b :";
    cin >> b;
    cout << "enter c :";
    cin >> c;

    if(a>b&&a>c)
        cout<<a<<" is largest";
    else if(b>a&&b>c)
        cout<<b<<" is largest";
    else if(a==b&&b==c&&a==c)
    cout<<"all numbers are equal";
    else
    cout<<c<<" is largest";

    return 0;
}

