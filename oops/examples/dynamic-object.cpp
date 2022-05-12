#include<iostream>
using namespace std;
class student{
  public:
   string  name;
};
int main(){
    student* ptr = new student();
    ptr->name="Ankush mehra";
    cout<<ptr->name;
    return 0;
}