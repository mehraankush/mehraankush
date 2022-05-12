#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int>num {4,5,4,6,6,4,4,3,5,6,66,7};
    for(int i:num)
    {
        cout<<i<<" ";
    }

    num.remove(6);   //remove all the element taht ae 6
    cout<<"\n\nafter removal :";
    for(int i:num)
    {
        cout<<i<<" ";
    }
   // cout<<num.size();
  return 0;
}