#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream my_file("sample.text",ios::app);

    if(my_file.fail())
    {cout<<"error"; exit(0);}

    my_file<<"\nappend the file in new line";
    my_file.close();

    return 0;
}