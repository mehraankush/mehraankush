#include<iostream>
bool isprime(int);
using namespace std;
int main()
{
  int n;cin>>n;

  for(int i=1;i<=n;i++){
      if(isprime(i)){
          cout<<i<<" ";
      }
  }
  return 0;
}
bool isprime(int N){
    if(N==0||N==1)
      {return false;}

   for(int i=2;i<=N;i++)
   {  if(N%i==0)
       {return false;}
   }
   return true;
}