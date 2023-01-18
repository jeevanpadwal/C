//accept no no.is ferfect or not
//sumation of factor is equal to that no.
//accept no written addtion factors 
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;((iCnt<=(iNo/2))&&(iSum<=iNo));iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum = iSum+iCnt;
        
            
        }  

    }
    if(iSum==iNo)
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
    bool bRet=0;

    printf("enter no\n");
    scanf("%d",&iValue);

    bRet =CheckPerfect(iValue);
        if(bRet==true)
        {
            printf("number is perfect");

        }
        else
        {
            printf("no.is not perfect");
        }

    return 0;
}