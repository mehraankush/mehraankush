#include <iostream>
using namespace std;
int isprime(int);
int main()
{
    int a;
    bool num;

    cout << "enter number : ";
    cin >> a;

    num = isprime(a);
    if (num == 1)
        cout << a << " is  prime";
    else
        cout << a << " is not prime";

    return 0;
}
int isprime(int a)
{   
    if(a==0||a==1)
    return 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}