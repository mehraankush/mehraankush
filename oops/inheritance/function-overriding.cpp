#include<iostream>
using namespace std;
class sound {
   public:
   void display()
   {
       cout<<"making animal sound ";
   }
};
class dog:public sound{
 public:
 void display()              //this  function overrides the parent display function
 {
     cout<<"bhow bhow "<<endl;
     sound::display();      //to access the super class function
 }
};
int main()
{
    dog d1;
    d1.display();
    return 0 ;
}
