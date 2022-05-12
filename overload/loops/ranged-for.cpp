#include <iostream>
using namespace std;
int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter " << (i + 1) << " num :";
        cin >> arr[i];
    }
    for(int a :arr)
    cout<<"elements are :"<<a<<endl;

    return 0;
}