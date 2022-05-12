#include<iostream>
using namespace std;

namespace one{
   void display()
    {cout<<"namesoace one"<<endl;}
}
namespace two{        //directive help to use the namespace function without using :: oprator
   void display()
    {cout<<"namesoace two"<<endl;}
}

int main()
{   using namespace one;
    display();
    two::display();
    return 0;
}