//number is divisible by 7
#include <iostream>
using namespace std;
int main()
{
    int num = 51;

    while (1)
    {

        if (num % 7 == 0)
            break;
        
        num++;
    }
    cout << num;
}