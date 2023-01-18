//accept string digit additiion
//recurtion

#include<stdio.h>

int Sum(int iNo)
{
    static int iSum =0; 
     int iDigit =0;

    if(iNo != 0)
    {
        iDigit = iNo %10;
        iSum = iDigit+iSum;
        iNo = iNo/10;

        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    printf("Sum of Digit iS :%d",iRet);

}

//String varil shabdanvr Operation kase karayche mhnje smallest word largest word