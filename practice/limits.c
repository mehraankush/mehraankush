#include<stdio.h>
#include<limits.h>

int main()
{
    
    unsigned  int var3=0;
    
   
    
    printf("\n\nrange of int is from %d to %d \n ",INT_MIN,INT_MAX);
   printf("range of unsighed int is from %u to %u\n ",var3,UINT_MAX);
   printf("range of short int is from %d to %d \n",SHRT_MIN,SHRT_MAX);
   printf("range of long int is from %ld to %ld \n",LONG_MIN,LONG_MAX);
   printf("range of long int is from %lu  \n",ULONG_MAX);
    return 0;
}