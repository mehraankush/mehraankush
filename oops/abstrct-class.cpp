#include<iostream>
using namespace std;

class triangle{
public:
    void tri(){
        cout<<"triangle has three sides ";
    }
    //pure virtual function
    virtual void  print()=0;
};

int main()
{  
    triangle t;
    t.tri();
    t.print();
    return 0;
}