#include <stdio.h>
#include <stdlib.h>
/*malloc() function reserves a block of memory
of the specified number of bytes its syntex is 
ptr = (*casetype)malloc(sizeinbytes)*/
int main()
{
    int n, *marks;
    

    system("cls");
    printf("enter number of student :");
    scanf("%d", &n);

    //allocatin  memory for n number of integer
    marks = (int *)malloc(n * sizeof(int));
    //if memory cannot be allocate end the function
    if (marks == NULL)
    {
        printf("error!cannot be allocated");
        return 0;
    }
   
    for (int i = 0; i < n; ++i)
    {   

        printf("enter elements :\n");
        //using pointer to store value in allocated memory
        scanf("%d", marks + i);
    }
    printf("the value stored are:");

    for (int i = 0; i < n; ++i)
    {
        printf("%d\t", *(marks + i));
    }
    /*we need to free up the DMA once its used
                   to release the memory we use the free()*/
    free(marks);
    return 0;
}