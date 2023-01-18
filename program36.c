// accept n number perform addtion 
#include<stdio.h>
#include<stdlib.h>

int SumationNumber(int Arr[],int iLength)
{
    int iSum=0;
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iSize=0,iRet=0;
    int *ptr=NULL;
    int iCnt=0;

    printf("emter no. of arry");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    Printf("enter the values");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=SumationNumber(ptr,iSize);

    printf("Summation  : \n",iRet);
    free(ptr);


  return 0;

}