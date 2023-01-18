//accept 2 no and give power of first to second
//in :2  3
//out :8 
#include"Header29.h"

int main()
{
   auto int  iValue1=0;
   auto int iValue2=0;
    auto ULONG lRet=0;

    printf("enter first no\n");
    scanf("%d",&iValue1);

    printf("enter power \n");
    scanf("%d",&iValue2);

   lRet= Power(iValue1,iValue2);
    printf("power result is : %ld \n",lRet);

    return 0;
}

//time complexity: O(N)