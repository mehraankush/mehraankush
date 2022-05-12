#include<iostream>
using namespace std;
class animal {
public:
  string name;
  void eat()
  {
      cout<<"i am an animal "<<endl;
      cout<<"i can eat "<<endl;
  }
};
class dog : public animal 
{
  public :
  void display ()
  {
  cout<<"my name is  "<<name<<endl;
  }
};
int main()
{
    dog dog1;
    //access inherited superclass member
    dog1.name ="TOMMY";
    dog1.eat();
    dog1.display();
    return 0;
}