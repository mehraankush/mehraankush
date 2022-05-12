#include <iostream>
using namespace std;
int main()
{
    int num = 55, guess;;
    ;
        cout << "enter a random number :";
    do
    {
        cin >> guess;
        if (guess > num)
            cout << "enter  a lower digit :";

        else if (guess < num)
            cout << "enter  a higher digit :";

        else 
        {
            cout << "congratulations you guess the right number ";
            break;
        }
        
        
    } while (guess!=num);

    return 0;
}