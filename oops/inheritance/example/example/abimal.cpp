#include<iostream>
using namespace std;

class animal{
public:
     void eat()
     {
         cout<<"I eat code "<<endl;
     }
     void walk()
     {
         cout<<" fast as fuck boi "<<endl;
     }
};

class dog:public animal{
    public:
    void talk()
    {
        cout<<"bhow bhow "<<endl;
    }

};
class cat:public animal{
    public:
    void talk()
    {
        cout<<"meow meow  "<<endl;
    }

};
int main()
{ 
    dog d;
    cat c;
    d.talk();
    d.eat();
    d.walk();
    c.talk();
    c.eat();
    c.walk();
 return 0;
}