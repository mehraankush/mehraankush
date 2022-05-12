#include<iostream>
using namespace std;
class parents {
  protected:
  string name;
  void display(){
      cout<<"name : "<<name;
  }

};
class child :public parents{
    public:
  void initializer(){
      name="stalker";
      display();
  }
};
int main()
{
    child child1;
    child1.initializer();
    return 0;

}