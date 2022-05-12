#include<iostream>
using namespace std;
class area{
  private:
int length,breadth;
friend int find_area(area);
public:
area():length(8),breadth(8){}
};
int find_area(area d)
{
    int area =d.length*d.breadth;
    return area;
}
int main()
{
   area obj;
   cout<<"area is :"<<find_area(obj);
   return 0;
}