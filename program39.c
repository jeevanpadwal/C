// accept n no. accept anather no X find how many times we find X return counter
//accept n no. return smallest no. from that n number 
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iFrq=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrq++;
        }
    }
    return iFrq;
}


int main()
{
    int iSize=0,iRet=0;
    int *ptr=NULL;
    int iCnt=0;
    int iValue=0;

    printf("emter no. of arry");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("enter the values");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("enter no. which count the frequency");
    scanf("%d",&iValue);

    iRet=Frequency(ptr,iSize,iValue);

    printf(" frequency is  %d: \n",iRet);
    free(ptr);


  return 0;



}