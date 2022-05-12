#include<iostream>
#include<fstream>
using namespace std;
int main()
{   string cont;

    fstream source("sample.text",ios::in);
    fstream destination("destination.text",ios::out);

   if(source.fail()||destination.fail())
   {cout<<"error";}

   while(!source.eof())
   {
     getline(source,cont);
     destination<<cont<<endl;
   }

   source.close();
   destination.close();
   return 0;
}