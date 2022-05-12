#include<stdio.h>
#include<stdlib.h>

int main()
{

long int x[2][3] = {{4,3},{1,5,5}};
//system("cls");

for(int i=0;i<2;++i)
{
    for(int j=0;j<3;++j)
    {
        printf("%li\n",x[i][j]);
    }
    
 }
 return 0;
}