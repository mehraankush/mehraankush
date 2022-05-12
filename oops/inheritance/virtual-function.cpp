#include<iostream>
using namespace std;

class parent{
   public: 
    //virtual function
    virtual void print(){
        cout<<"to overridde the parent class(function) completely";
    }

};
class child :public parent{
    public:
    void print()
    {
        cout<<"override is successesful";
    }

};
int main()
{   
    child c;
    parent*p;

    p=&c;
    p->print();
    return 0;
}