#include <stdio.h>

int main()
{

   //printf("hello world :");
  char s[]={'\b','\r','\t','\n'};

  for(int i=0;i<4;i++ )
  {
      printf("%c",s[i]);
  }
    return 0;
}
