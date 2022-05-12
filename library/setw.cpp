#include<iostream>
#include<iomanip>
using namespace std;
int main()
{  int width {20};
   
   cout<<left;
   cout<<setw(width)<<"hello it's me"<<setw(12)<<endl
       <<setw(width)<<"no it's me"<<setw(12)<<endl
       <<setw(width)<<"that it's me"<<setw(12)<<endl
       <<setw(width)<<"hear it's me"<<setw(12)<<endl;
   cout<<right;
   cout<<setw(width)<<"hello it's me"<<setw(12)<<endl
       <<setw(width)<<"no it's me"<<setw(12)<<endl
       <<setw(width)<<"that it's me"<<setw(12)<<endl
       <<setw(width)<<"hear it's me"<<setw(12)<<endl;

    cout<<-123<<endl;
    std::cout<<std::internal;
    cout<<setw(width)<<-123<<endl;

    cout<<setfill('-');
   cout<<setw(width)<<"hello it's me"<<setw(12)<<endl
       <<setw(width)<<"no it's me"<<setw(12)<<endl
       <<setw(width)<<"that it's me"<<setw(12)<<endl
       <<setw(width)<<"hear it's me"<<setw(12)<<endl;
    return 0;
}