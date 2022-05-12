#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string cont ;
    fstream my_file;

    my_file.open("sample.text",ios::in);
    
    cout<<boolalpha;
  if(my_file.fail())
  {
      cout<<"!error file does not open:";
      exit(0);
  }
  while(!my_file.eof())   //open file till end of the line
  {
    getline(my_file,cont);
    cout<<cont<<endl;
  }    
    my_file.close();

    return 0;
}