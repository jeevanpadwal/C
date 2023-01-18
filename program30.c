//armstom no. or not
#include<stdio.h>
#include<stdbool.h>

bool ChkArmstrom(int iNo)
{
    int iCnt=0;
    int iDigit=0;
    int iTemp=0;;
    int iDigiCnt=0;
    int iSum=0;
    iTemp=iNo;
    while(iNo!=0)
    {
        
        iDigiCnt++;
        iNo=iNo/10;
    }
    iNo=iTemp;

    int iMult=1;

  while(iNo!=0)
  {
      iDigit=iNo%10;
    for(iCnt=0;iCnt<=iDigiCnt;iCnt++)
    {
     iMult=iMult*iDigit;
  
    }
      iSum=iSum+iMult;
      iNo=iNo/10;
  }
    if(iSum==iTemp)
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
    printf("enter the number\n");
    scanf("%d",&iValue);

   bRet= ChkArmstrom(iValue);
   
   if(bRet==true)
    {
        printf("%d is armstrom number\n",iValue);

    }
    else
    {
        printf("%d is not armstrom\n",iValue);
    }
    return 0;
}

