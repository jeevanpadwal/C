//Factorial
#include<stdio.h>
int FactR(int iNo)
{
   static int iMult =1;
   
    if(iNo != 0)
    {
       iMult =iMult*iNo;
       iNo--;
       FactR(iNo);
    }
   return iMult;
}

int main()
{
    int iValue =0;
    int iRet=0;

    printf("enter the value:\n");
    scanf("%d",&iValue);

    iRet = FactR(iValue);

    printf("Factorial is :%d",iRet);


    return 0;
}