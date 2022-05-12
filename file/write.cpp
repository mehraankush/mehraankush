#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream my_file;
    my_file.open("sample.text",ios::out);

    if(my_file.fail())
    {
        cout<<"!Error";
    }
    my_file<<"sample case for this file";  //it will replace the content of the file with this

    my_file.close();

    cout<<"succesess";
    return 0;

}