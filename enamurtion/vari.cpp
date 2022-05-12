#include <iostream>
using namespace std;

enum season{winter,summer,spring,autumn}first_season,last_season;

int main()
{   
   // season first_season,last_season; //we can also initilize enum  variable like this
   //assing the value to the enum veriable
   first_season=winter;
   last_season=autumn;
    cout<<first_season<<endl;
    cout<<last_season<<endl;
    return 0;
}