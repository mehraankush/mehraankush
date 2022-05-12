#include<iostream>
#include<exception>
#include<vector>
using namespace std;
int main()
{
   vector <int> num {4,3,5,4};

   try{
       cout<<num.at(5);
   }

   catch(out_of_range e)
   {
       cout<<"can't print "<<endl;
       cout<<"error! "<<e.what()<<endl;
   }
   return 0;
}