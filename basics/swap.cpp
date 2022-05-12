#include<iostream>
using namespace std;
int main()
{
    int n1=5,n2=7;
    int swap;

   /* swap=n1;
    n1=n2;
    n2=swap;*/
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    cout<<n1<<" "<<n2;
    return 0;
}