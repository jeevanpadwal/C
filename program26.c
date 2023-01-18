//  cheak number palindrom or not 
#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrom(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit=0;
    int iRev=0;
    int iXe=iNo;

    while(iNo>0)
    {

        iDigit=iNo%10;
        iRev=iRev*10+iDigit;

        iNo=iNo/10;
    }
    if(iRev==iXe)
    {
        return true;
    }
    else
    {
         return  false;
    }
    
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("enter no\n");
    scanf("%d",&iValue);

    bRet=ChkPalindrom(iValue);

    if(bRet==true)
    {
        printf("number is palindrome%d\n",iValue);

    }
    else
    {
        printf("number is not palindrome %d\n",iValue);
    }

    return 0;
}