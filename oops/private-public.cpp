#include <iostream>
using namespace std;
class student
{
private:
 string name; 
 public:
    void set_name(string n)
    {
        name = n;
    }
    string get_name()
    {
        return name;
    }
};
int main()
{
    student student1,student2;
    student1.set_name("Ankush mehra");
    student2.set_name("Gitik chauhan");
    cout << "NAME : " << student1.get_name()<<endl;
    cout << "NAME : " << student2.get_name();
    return 0;
}