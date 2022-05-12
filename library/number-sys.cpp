#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int pos {345454};
    int neg {-46474};
    double dou {54.32};

    cout<<showpos;
    cout<<pos<<endl 
        <<neg<<endl 
        <<dou<<endl;
    
    cout<<std::dec<<pos<<endl;
    cout<<std::hex<<pos<<endl;
    cout<<std::oct<<pos<<endl;
    
    cout<<uppercase;
    cout<<std::dec<<neg<<endl;
    cout<<std::hex<<neg<<endl;
    cout<<std::oct<<neg<<endl;

    cout<<std::dec<<dou<<endl;
    cout<<std::hex<<dou<<endl;
    cout<<std::oct<<dou<<endl;

}