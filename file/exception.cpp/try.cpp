#include<iostream>
using namespace std;
int main()
{
    double num,deno,res;
   
   cout<<"enter numarator :";
   cin>>num;
   cout<<"enter denominator :";
   cin>>deno;

   try{
       if(deno==0)
       throw 0;    //if denominator is 0 zero then control transfer to the catch
       
       res=num/deno;
       cout<<num<<"/"<<deno<<"= "<<res<<endl;
   }

   catch(int excep)
   {cout<<"exception can't be devided by "<<excep;}
   return 0;
}