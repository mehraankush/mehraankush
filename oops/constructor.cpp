#include <iostream>
using namespace std;
class car
{
public:
    int gear, top_speed;
    // constructor
    car() // it should be same name as class
    {
        cout << "woo success" << endl;
        gear = 5;
        top_speed = 300;
    }
};
int main()
{
    car car1;

    cout << "value of 1 object : " << car1.gear << endl; // we can access the componenr of construct without
                                                         // calling it. can be used direct
    cout << "value of 1 object : " << car1.top_speed << endl;

    return 0;
}