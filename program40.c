#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

// we can use also bFlag concept here

bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    
    int iCnt2=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
        if(iCnt==iLength)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}


#include<stdbool.h>
int main()
{
    int iSize=0;
    
     bool bRet;
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

    bRet=Search(ptr,iSize,iValue);

      if(bRet==true)
     {
        printf("element is there in arry\n");
     }
        else
      {
         printf("element is not there\n");
      }
    
        free(ptr);


  return 0;



}