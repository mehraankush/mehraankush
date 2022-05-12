#include <iostream>
using namespace std;
class reactangle
{
private:
    int length, breadth;
public:
    reactangle(int len, int bret)
    {
        length = len;
        breadth = bret;
    }
    int get_area()
    {   
        int area=length*breadth;
        return area;
    }
};
int main()
{
    reactangle area(6,4);
    cout<<"area is : "<<area.get_area();
    return 0;
}
