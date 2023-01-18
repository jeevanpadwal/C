// accept no. cheak whether prime number or not 


#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
    int iCnt=0;
    int iFt=0;
    for(iCnt=2;iCnt<=iNo;iCnt++)
    {
        if((iCnt % iNo)==0)
        {
            iFt++;
        }
    }
    return iFt;
} 
bool CheakPrime(int iNo)
{
    int iRet=0;
    iRet=CountFactor(iNo);
    if(iRet==0)
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
    
    printf("enter number\n");
    scanf("%d",&iValue);

    bRet=CheakPrime(iValue);
    
    if(bRet==true)
    {
        printf("%d is prime number",iValue);
    }
    else
     {
        printf("%d is not prime",iValue);
     
     }

    return 0;
}




