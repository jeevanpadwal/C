#include<stdio.h>

int SumDigit(int iNo)
{
    int iSum=0;
    int iDigit=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
   

    while(iNo!=0)//iNo!=0
    {
        iDigit=iNo%10;

        if((iDigit%2)==0)
        {
           iSum=iSum+iDigit;
            
        }
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

    printf("sum of even no:%d",iRet);


    return 0;
}