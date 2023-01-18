#include<stdio.h>
#include<stdlib.h>

int  CountEven(int Arr[],int iLength)
{
    int iCnt=0,iEvenCnt=0;
     printf("Even elemnt are : \n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
          iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int iSize=0,iRet=0;
    int *ptr=NULL;
    int iCnt=0;

    printf("enter how many number :\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("enter the values :\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=CountEven(ptr,iSize);

    printf("number of even elements : %d\n",iRet);
    free(ptr);

    return 0;

}