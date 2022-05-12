#include <iostream>
#define pi 3.141592653589793238
using namespace std;

int main()
{
    cout<<pi<<endl;
    #undef pi
    #define pi 3.141
    cout<<pi<<endl;


   return 0;
}