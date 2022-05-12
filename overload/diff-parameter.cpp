#include<iostream>
using namespace std;


int positive(int var )
{
    if(var<0)
    {return abs(var);}
}
float positive(float var )
{
    if(var<0)
   { return abs(var);}
}

int main()
{
    cout<<positive(-5)<<endl<<positive(-5.5f);
    return 0;
}
