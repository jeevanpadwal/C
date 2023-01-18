//accept arry addtion of that arry

#include<stdio.h>

int Sum(int brr[],int iSize)
{
    int i=0;
    int iSum =0;
////////////////for loop
    for(i=0;i<=iSize;i++)
    {
        iSum = iSum+brr[i];
    }
    return iSum;
}
//////////while looop
 int SumW(int brr[],int iSize)
 {
    int iSum =0;
    int i =0;

    while(  i <iSize)
    {
        iSum =iSum+ brr[i];
        i++;

    }
    return iSum;
 }
//////////recurtion

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