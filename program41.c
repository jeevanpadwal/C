//accept N number as well accept anathor return index initially
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>



int  SearchFirstOccurance(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
        
            break;
        }
       
    }
    if(iCnt==iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}


#include<stdbool.h>
int main()
{
    int iSize=0;
    
     int iRet;
    int iCnt=0;
    int *ptr=NULL;
    int iValue=0;

    printf("emter no. of arry");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("enter the values");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("enter to search\n");
    scanf("%d",&iValue);

    iRet =SearchFirstOccurance(ptr,iSize,iValue);
    
    if(iRet==-1)
    {
        printf("ther is no such element");
    }
    else
    {
        printf("element first occred at : %d\n",iRet);
    }
        free(ptr);
  return 0;



}