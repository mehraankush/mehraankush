#include <iostream>
#include <string>
using namespace std;
string getdayoftheweek(int daynum);

int main()
{
     int n;
     cout<<"enter a digit(1-7) :";
     cin>>n;
    cout <<"today is "<< getdayoftheweek(n);
    return 0;
}
string getdayoftheweek(int daynum)
{
    string dayname;
    switch (daynum)
    {
    case 1:
        dayname ="sunday";
        break;
    case 2:
        dayname = "monday";
        break;
    case 3:
        dayname = "tuesday";
        break;
    case 4:
        dayname = "wednesday";
        break;
    case 5:
        dayname = "thusday";
        break;
    case 6:
        dayname = "friday";
        break;
    case 7:
        dayname = "saturday";
        break;

    default:
        dayname = " invalid digit ";
    }
    return dayname;
}