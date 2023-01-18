//program 19 without using flag
// accept no. cheak whether prime number or not 


#include<stdio.h>
#include<stdbool.h>

bool CheakPrime(int iNo)
{
    int iCnt=0;

    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
        if((iCnt % iNo)==0)
        {
            break;
        }
    }

    if((iCnt==(iNo/2)+1))
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




