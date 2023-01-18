#include<stdio.h>

int SumDigit(int iNo)
{
    int iSum=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
   int iDigit=0;

    while(iNo!=0)//iNo!=0
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        
    }
    return iSum;

}
int main()
{

    int iValue=0;
    int iRet=0;

    printf("enter number\n");
    scanf("%d",&iValue);

    iRet=SumDigit(iValue);

    printf("addition id:%d",iRet);

    return 0;
}