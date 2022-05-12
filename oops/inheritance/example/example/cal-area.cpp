#include<iostream>
#define PI 3.141592653589
using namespace std;

class shape{
protected:
  double dim;
public:
  virtual double calcu_area()=0; //pure virtual
};

class square:public shape{
public:
  //constructor
   square(double side){
       dim=side;
   }
   double calcu_area()
   {
       return (dim*dim);
   }
};

class circle:public shape{
public:
  circle(double radius){
      dim=radius;
  }

  double calcu_area(){
      return PI*(dim*dim);
  }
};
int main(){
    square s(4);
    circle c(5);
 
 cout<<"area of square :"<<s.calcu_area()<<endl;
 cout<<"area of circle :"<<c.calcu_area()<<endl;
 return 0;
}