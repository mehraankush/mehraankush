#include<iostream>
using namespace std;
class animal{
    int legs_count;
    friend class dog;
    public:
    animal():legs_count(6){}
};
class dog{
 animal d1;
  public:
 void leg_count(){
  cout<<"legs are "<<d1.legs_count;
 }
};
int main()
{
dog d1;
d1.leg_count();
return 0;
}