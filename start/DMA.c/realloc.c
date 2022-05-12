//program to realloc the previously allocted memory
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *prt,i,n;
    //aloocation memory
    prt=(int*)malloc(2*sizeof(int));

    printf("previous memery :");

    for(i = 0;i<2;++i)
     printf("%p,",prt+1);
       
    prt = realloc(prt,3*sizeof(int));

    printf("\n current memory:");
    for( i = 0; i<3;++i);
     printf("%p,",prt+1);
     
     //freeing space
     free(prt);
     return 0;
}