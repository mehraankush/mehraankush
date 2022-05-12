#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> num={5,4,3,2,1};

    cout<<"\ninitial capacity:"<<num.capacity()<<endl;
    cout<<"\ninitial size :"<<num.size()<<endl;

    num.pop_back();   //delete the last element 
    cout<<"\ninitial capacity:"<<num.capacity()<<endl;
    cout<<"\ninitial size :"<<num.size()<<endl;
    return 0;
}