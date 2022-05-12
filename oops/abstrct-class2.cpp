#include<iostream>
using namespace std;

class polygon{
public:
      void print(int side)
      {
          cout<<"sides of triangle is "<<side<<endl;
      }
    virtual void get_area()=0;
};

class rectangle:public polygon{
private:
    double length;
    double breath;
public:
    //condtructor
   rectangle(double len,double bre){
       length=len;
       breath=bre;
   }
   //implement pure virtual function
   void get_area()
   {
       cout<<"area is : "<<length*breath<<endl;
   }
};
int main()
{   
    double n1,n2;
    cout<<"enter sides of rectangle "<<endl;
    cin>>n1>>n2;
    
    rectangle obj(n1,n2);
    obj.print(4);  //class regular function


    //class function of subclass
    obj.get_area();

    return 0;
}
