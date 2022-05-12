#include<iostream>
#include<exception>
using namespace std;
int main()
{
    try {
        int* ptr=new int[10000000000000];

        delete[] ptr;
    }

    catch(bad_alloc e)  //e is a object of bad_alloc
    {
        cout<<"cant't allocate memory :"<<endl;
        cout<<"error !"<<e.what()<<endl;
    }
    return 0;
}