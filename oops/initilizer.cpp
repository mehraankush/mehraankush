# include <iostream>
using namespace std;
class car
{
public:
    int gear,speed ;
   car() :gear(3) ,speed(67)  {}
   
};
int main()
{
    car car1, car2;  //these are objects we can creat as much as we want

    cout << "value of 1 object : " << car1.gear << endl;
    cout << "value of 1 object : " << car1.speed << endl;
    car2.gear = 67;
    car2.speed = 69;
    cout << "value of 2 object : " << car2.gear << endl;
    cout << "value of 2 object : " << car2.speed << endl;
    
    return 0;
}