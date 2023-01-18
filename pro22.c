//accept no writeen no.of digits from that no
//in:721
//out:3
#include<stdio.h>
int NoDigit(int iNo)
{
    int iCnt=0;
    
    while(iNo>0)
    {
       
        iCnt++;
        iNo=iNo/10;
        
        
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter no");
    scanf("%d",&iValue);

    iRet=NoDigit(iValue);

    printf("no of digit %d\n",iRet);

    return 0;
}