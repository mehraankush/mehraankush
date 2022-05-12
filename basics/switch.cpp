//simple calculater
#include <iostream>
using namespace std;
int main()
{
    char oprator;
    int num1, num2;

    cout << "enter two number :";
    cin >> num1>> num2;
    cout << "enter an oprator(+,-,*,/) :";
    cin >> oprator;
    switch (oprator)
    {
    case '+':
        cout << "sum is :" <<( num1 + num2);
        break;
    case '-':
        cout << "difference  is :" <<( num1 - num2);
        break;
    case '*':
        cout << "product is :" << (num1 * num2);
        break;
    case '/':
        cout << "division is :" << (num1 / num2);
        break;
    default:
        cout << "INVALED OPRATOR :";
    }
    return 0;
}
