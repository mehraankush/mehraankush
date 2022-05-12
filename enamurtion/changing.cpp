#include <iostream>
using namespace std;

enum season{winter,
            summer=9,
            spring,
            autumn}first_season,last_season;

int main()
{   
   
   first_season=winter;
   last_season=autumn;
    cout<<first_season<<endl;
    cout<<last_season<<endl;
    return 0;
}