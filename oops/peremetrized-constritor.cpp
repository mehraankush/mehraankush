# include <iostream>
using namespace std;
class sum
{
public:
    int gear ,speed;
    sum(int a,int b)
    {
      gear=a+10;
      speed=b+10;
    }
};
int main()
{
    sum sum1(34,54);
    sum sum2(54,43);

    cout << "value of 1 object : " << sum1.gear << endl;
    cout << "value of 2 object : " << sum1.speed << endl;
    
    cout << "value of 1 object : " << sum2.gear << endl;
    cout << "value of 2 object : " << sum2.speed << endl;
  
    return 0;
}