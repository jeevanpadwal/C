//sameshion of number accept from user 

#include<stdio.h>

int Sum(int iNo)
{
int iSum=iNo;
int iCnt=0;


    for(iSum=1;iSum<=iCnt;iSum++)
    {
        printf("%d",&iNo);
    }
    return iNo;
}

int main()
{
int iNo =0;
int iRet=0;
printf("enter no");
scanf("%d",&iNo);

if(iNo<0)
{
    iNo=-iNo;
}

iRet=Sum(iNo);

printf("addition is%d ",iRet);
    return 0;
}