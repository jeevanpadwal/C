#include<stdio.h>
#include<stdbool.h>

bool ChkArmstrong(int iNo)
{
 int iTemp=0,iCnt=0,iDigit=0,iSum=0;
 int iDigCnt=0;
 int iMult=1;
 
 if(iNo<0)
 {
     iNo=-iNo;
 }

 iTemp=iNo;

 //Calculate number of digits 
   while(iNo!=0)
   {
       iDigCnt++;
       iNo=iNo/10;

   }
   iNo=iTemp;
   
   while(iNo!=0)
   {
        iMult=1;
       iDigit=iNo%10;
       for(iCnt=1;iCnt<=iDigCnt;iCnt++)
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
    bool bRet;

    printf("Enter no");
    scanf("%d",&iValue);

    bRet=ChkArmstrong(iValue);

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