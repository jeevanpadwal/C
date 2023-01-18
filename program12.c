//accept no &display factor

#include<stdio.h>

 void DisplayNonFactor(int iNo)
{
    
     int iCnt=0;
     if(iNo<0)
     {
         iNo=-iNo;
     }
   for (iCnt=1;iCnt<(iNo);iCnt++)
   {
       if((iNo%iCnt)!=0)
      {
        printf("%d\n",iCnt);
      }
   }
}

int main()
{
int iValue=0;
int iRet=0;
printf("enter no:\n");
scanf("%d",&iValue);

DisplayNonFactor(iValue);

    return 0;
}



//TIME COMPEXITY:O(N/2)      