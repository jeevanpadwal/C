//accept 2 no and give power of first to second give mult
//in :2  3
//out :8 

#include<stdio.h>

typedef unsigned long int ULONG;

 ULONG Power(int iNo1,int iNo2)
{
    register int iCnt=0;
   ULONG lMult=1;

          
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        lMult=lMult*iNo1;
    }
    return lMult;
}

int main()
{
   auto int  iValue1=0;
   auto int iValue2=0;
    auto long int lRet=0;

    printf("enter first no\n");
    scanf("%d",&iValue1);

    printf("enter power \n");
    scanf("%d",&iValue2);

   lRet= Power(iValue1,iValue2);
    printf("power result is : %ld \n",lRet);

    return 0;
}

//time complexity: O(N)