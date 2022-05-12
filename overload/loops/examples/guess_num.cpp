#include <iostream>
using namespace std;
int main()
{
    int num = 55, guess, guess_chance = 2;
    int guesses = 0;
    // bool =outofguesses=false;

    cout << "enter a random number :";
    cin >> guess;
    while (guesses < guess_chance)
    {

        if (guess > num)
            cout << "enter  a lower digit :";

        else if (guess < num)
            cout << "enter  a higher digit :";

        else
        {
            cout << "congratulations you guess the right number ";
            break;
        }
        guesses++;
        cin >> guess;
    }
    return 0;
}