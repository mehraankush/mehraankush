#include <iostream>
using namespace std;

enum season{winter,summer,spring,autumn};

int main()
{
    cout<<season::summer<<endl;
    cout<<season::winter<<endl;
    cout<<season::autumn<<endl;
    return 0;
}