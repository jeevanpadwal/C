//Array concept

#include<stdio.h>
#include<stdlib.h>  //for malloc and free

void Display(int Arr[],int iLength)
{
    int iCnt=0;

  printf("elements of arry are :\n");

  for(iCnt=0;iCnt<iLength;iCnt++)
   {
       printf("%d\n",Arr[iCnt]);
    }

}

int main()
{

//auto int Brr[5];   ststic mamory allocation

int *ptr=NULL;
register int iCnt=0;
int iSize=0;

 printf("enter elements : \n");
 scanf("%d",&iSize);

 ptr=(int*)malloc(iSize*sizeof(int));

 printf("enter element :\n");

 for(iCnt=0;iCnt<iSize;iCnt++)
 {
     scanf("%d",&ptr[iCnt]);
 }

 Display(ptr, iSize);    //Display(100,4)
 free(ptr);

    return 0;
}