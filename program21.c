#include<stdio.h>
//input: 7856
//output:
//6
//5
//8
//7

void DisplyDigit(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }
   int iDigit=0;

    while(iNo!=0)//iNo!=0
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
        
    }

}
int main()
{

    int iValue=0;

    printf("enter number\n");
    scanf("%d",&iValue);

    DisplyDigit(iValue);

    return 0;
}