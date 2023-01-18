//accept no.check wheter divisible by 3&5
#include<stdio.h>
#include<stdbool.h>

 bool Cheak(iNo)
{
    if(((iNo%3)==0)&&
    ((iNo%5)==0))
     {
         return true;
     }
    else
     {
      return false;
     }
}

int main()
{
 int iValue=0;
 bool bRet=false;

 printf("enter no.\n");
 scanf("%d",&iValue);

 bRet=Cheak(iValue);
    if(bRet==true)
    {
        printf("divisible by 5 and 3\n");
    }
    else
    {
        printf("not divisible by 5 ans 3\n");
    }
    return 0;
}