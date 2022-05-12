#include<iostream>
using namespace std;
int main()
{
    int* num = new int ;

    delete num;
    
    num = NULL;  //it's a danging problum if we wouldn't do that pointer will pointed at the ramdon address
    cout<<num;  
    return 0;
}