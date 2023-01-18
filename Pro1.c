//Factorial
#include<stdio.h>

int FactI(int iNo)
{
   auto int iMult =1;

    while(iNo != 0)
    {
       iMult =iMult*iNo;
       iNo--;
    }
   return iMult;
}

int main()
{
    int iValue =0;
    int iRet=0;

    printf("enter the value:\n");
    scanf("%d",&iValue);

    iRet = FactI(iValue);
    printf("Factorial is :%d",iRet);


    return 0;
}