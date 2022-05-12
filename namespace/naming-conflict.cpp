#include <iostream>
using namespace std;

namespace float_data{
    float number;
}
namespace double_data{   //namespace allows us to use the samename variable in multiple time
     double number;      //it help to avoid the naming conflict
}

int main()
{
    int number=6;
    float_data::number=6.9f;
    double_data::number=6.9;
    cout<<number<<endl;
    cout<<float_data::number<<endl;
    cout<<double_data::number<<endl;

    return 0;
}