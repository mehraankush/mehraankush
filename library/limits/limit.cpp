#include<iostream>
#include<limits>
#include<iomanip>
int main()
{ 
std::cout<<std::scientific;
  std::cout<<"int range : "<<std::setw(20)<<std::numeric_limits<int>::min()<<" to "<<std::numeric_limits<int>::max()<<std::endl;
  std::cout<<"float range :"<<std::setw(20)<<std::numeric_limits<float>::min()<<" to "<<std::numeric_limits<float>::max()<<std::endl;
  std::cout<<"double range :"<<std::setw(20)<<std::numeric_limits<double>::min()<<" to  "<<std::numeric_limits<double>::max()<<std::endl;
  std::cout<<"char range :"<<std::setw(20)<<std::numeric_limits<char>::min()<<" to "<<std::numeric_limits<char>::max()<<std::endl;
 /* std::cout<<"unsigned int range :"<<std::setw(20)<<std::numeric_limits<unsigned int>::min()<<" to "<<std::numeric_limits<unsigned int>::max()<<std::endl;
  std::cout<<"long int  range :"<<std::setw(20)<<std::numeric_limits<long int>::min()<<" to "<<std::numeric_limits<long int>::max()<<std::endl;
  std::cout<<"long double range :"<<std::setw(20)<<std::numeric_limits<long double>::min()<<" to "<<std::numeric_limits<long double>::max()<<std::endl;*/
  return 0;
}