#include<iostream>
using namespace std;

class animal{
public:
  string name="unknown";
 
   /*void print(){
       cout<<"animal is "<<name<<endl;
   }*/
};

class dog:public animal{
public:
   string name;
   void bhow(){
       cout<<"animal name is "<<name<<endl;
   }
};

int main()
{   
    dog d;
     d.name="TOMMY";
     d.bhow();
     cout<<"animal name is "<<d.animal::name<<endl;
    return 0;
}