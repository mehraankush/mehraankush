#include<iostream>
using namespace std;

class student{
    public:
    static string name;
    static void  display_name(){
          cout<<"Name : "<<name;
    }
};
string student::name ={"Ankush mehra"};
int main()
{
    student::display_name();
    return 0;
}