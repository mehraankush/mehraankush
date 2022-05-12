#include <iostream>
using namespace std;

int add(int, int);
int product(int, int);
int main()
{
    int num1, num2;
    int sum, prod;
    cout << "enter first number :" << endl;
    cin >> num1;
    cout << "enter second number :";
    cin >> num2;
    sum = add(num1, num2);
    prod = product(num1, num2);
    cout << "sum is  :" << sum << endl;
    cout << "product is  :" << prod << endl;

    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int product(int a,int b)
{
    return a*b;
}