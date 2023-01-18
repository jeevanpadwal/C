#include<stdio.h>

int main()
{
    int a = 20;

    int *ptr = &a;
     printf("Address of a :%d\n",&a);

    free (a);

   printf("garbage value after free :%d\n & Address is :%d",*ptr,&a);
    
    return 0;

}