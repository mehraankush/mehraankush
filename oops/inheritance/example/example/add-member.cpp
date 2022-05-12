#include<iostream>
using namespace std;

class classB;  //forword declaration
class classA {
private:
    int numA;  
    friend int add(classA,classB);
public:
//constructor of classA
    classA(){
        numA =12;
    };
};

class classB {
private:
    int numB;
    friend int add(classA,classB);
public:
//constructor of classB
    classB(){
        numB=1;
    };
};
int add(classA objA,classB objB)
{
    return (objA.numA+objB.numB);
}
int main()
{   classA objA;
    classB objB;
    cout<<"sum is :"<<add(objA,objB);
    return 0;
}