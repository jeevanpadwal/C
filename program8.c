// accept cheack whether the no.is even or odd

#include<stdio.h>
#include<stdbool.h>

bool CheakEven(int iNo)
{
   if((iNo%2)==0)
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

bRet=CheakEven(iValue);
if(bRet==true)
{
    printf("%d is even number\n",iValue);
}
else
{
printf("%d is odd number\n",iValue);
}

    return 0;
}