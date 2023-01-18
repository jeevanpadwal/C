#include<stdio.h>

//Demonstration of ITRATION
void Display(int iNo)
{
   {
      if(iNo<0)
      {
         iNo=-iNo;
      }
      
   }

    int iCnt=0;
    for(iCnt=0;iCnt<iNo;iCnt++)
   {

       printf("hello\n");
   }

}
   int main()
{

  int iValue=0;

  printf("enter the number\n");
  scanf("%d",&iValue);

   Display(iValue);

   return 0;

}