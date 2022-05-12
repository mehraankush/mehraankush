# include <iostream>
using namespace std;
class car
{
public:
    int gear = 6;
    void go()
    {
        cout << "woo success"<<endl;
    }
};
int main()
{
    car car1, car2;  //these are objects we can creat as much as we want

    cout << "value of 1 object : " << car1.gear << endl;
    cout << "value of 2 object : " << car2.gear << endl;
    car1.gear = 67;
    car2.gear = 69;
    cout << "value of 1 object : " << car1.gear << endl;
    cout << "value of 2 object : " << car2.gear << endl;
    car1.go();
    car2.go();
    return 0;
}