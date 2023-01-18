//accept n no. return largest no. from that n number 
#include<stdio.h>
#include<stdlib.h>

int MaxX(int Arr[],int iLength)
{
    int iMax=Arr[0],iCnt=0; //iMax=0 this is for onliy positive integer

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iMax<Arr[iCnt])
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize=0,iRet=0;
    int *ptr=NULL;
    int iCnt=0;

    printf("emter no. of arry");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("enter the values");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=MaxX(ptr,iSize);

    printf("Maximum no. is %d: \n",iRet);
    free(ptr);


  return 0;



}