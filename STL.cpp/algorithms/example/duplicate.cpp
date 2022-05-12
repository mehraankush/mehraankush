#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int>num {4,6,6,75,4,3,5,78,6,5};

    for(int i:num)
    {
        cout<<i<<" ";
    }
   /* num.unique();//use only in list  //remove the same element in list but they should be adjacent to each other
    cout<<"\n\nafter unique" ;  
    for(int i:num)
    {
        cout<<i<<" ";
    }*/

    num.sort();
    num.unique();
    cout<<"\n\nafter sorting and removing dublicate elements :" ;  
    for(int i:num)
    {
        cout<<i<<" ";
    }

    return 0;
}