#include<stdio.h>

int main()
{
    int i =0,j=0;
    int *p =NULL;
    int arr[] ={2,7,11,15};
    
    for(i=0;i< 4;i++)
    {
      for(j=0 ;j < 4;j++)
      {
          if((arr[i]+arr[j])== 9)
          {
               printf("%d%d",i,j);
          }
      }
    }
    
    return 0;
    
}