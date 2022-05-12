#include<stdio.h>
#include<stdlib.h>

void disnum(int n[][2])
{
    printf("the elements are\n");

    for(int i =0;i<2;++i)
    {
        for(int j = 0;j<2;++j)
        {
         printf("%d",n[i][j]);
      }
    }
}
 int main()
 {
     int x[][2]={{1,4},{5,7}};
     disnum(x);
     return 0;
 }