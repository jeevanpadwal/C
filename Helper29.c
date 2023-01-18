//accept 2 no and give power of first to second
//in :2  3
//out :8 

#include"Header29.h"

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

