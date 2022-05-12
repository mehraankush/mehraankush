#include <iostream>
using namespace std;
void swap_num(int *a, int *b);
int main()
{
    int a = 5, b = 9;
    int swap;
    swap_num(&a, &b);
    cout << "a = " << a<<endl<< "b = " << b;
    return 0;
}
void swap_num(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
