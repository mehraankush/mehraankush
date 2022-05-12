#include <iostream>
using namespace std; //for not including std::

int main()
{
    int a, b;

    cout << "enter numbers :";
    cin >> a >> b;

    cout << "added number is : " << a + b << endl; // endl plays the same role as a "\n" new line character does
    cout << "substracted number is : " << a - b << endl;
    cout << "multiplied number is : " << a * b << endl;
    cout << "divided number is : " << a / b << "\n";
    cout << "reminder  number is : " << a % b;
    return 0;
}