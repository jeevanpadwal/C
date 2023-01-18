//accept N number as well accept anathor return index initially
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>



int  SearchLastOccurance(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    for(iCnt=(iLength-1);iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
        
            break;
        }
       
    }
    return iCnt;
    
}


#include<stdbool.h>
int main()
{
    int iSize=0;
    
     int iRet;
    int iCnt=0;
    int *ptr=NULL;
    int iValue=0;

    printf("emter no. of arry\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("enter the values\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("enter to search\n");
    scanf("%d",&iValue);

    iRet =SearchLastOccurance(ptr,iSize,iValue);
    
    if(iRet==-1)
    {
        printf("ther is no such element");
    }
    else
    {
        printf("element last occred at : %d\n",iRet);
    }
        free(ptr);
  return 0;

}