#include<iostream>
#include<iomanip>
using namespace std;
int main()
{  
    auto var1 {12};
    auto var2 {12.4f};
    auto var3 {12.43};
    auto var4 {'c'};
    auto var5 {123u};
    auto var6 {1254ul};
    auto var7 {12ll};

    cout<<sizeof(var1)<<setw(8)<<"bytes"<<endl
        <<sizeof(var2)<<setw(8)<<"bytes"<<endl
        <<sizeof(var3)<<setw(8)<<"byte"<<endl
        <<sizeof(var4)<<setw(8)<<"bytes"<<endl
        <<sizeof(var5)<<setw(8)<<"bytes"<<endl
        <<sizeof(var6)<<setw(8)<<"bytes"<<endl
        <<sizeof(var7)<<setw(8)<<"bytes"<<endl;
    return 0;
}