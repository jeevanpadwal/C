//padhe

#include<stdio.h>

void Table(float iNo)
{
    float iCnt=0;
    float iMult=0;
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        iMult=iNo*iCnt;

        printf("%d\n",iMult);
    }
}

int main()
{
    float iValue=0;

    printf("enter the no\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}