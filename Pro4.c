#include<stdio.h>
int SumR(int brr[],int iSize)
 {
    static int iSum =0;
    
    if(iSize >= 0)
    {
        iSum = iSum + brr[iSize];
        iSize--;
        SumR(brr,iSize);
    }
    return iSum;
 }

 int main()
{
   int arr[] ={10,20,30,40};

   int iRet =0;

   iRet = SumR(arr,4);
   printf("Sumation is :%d",iRet);

    return 0;
}