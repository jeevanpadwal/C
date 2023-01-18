//program to display number from user on screen


#include<stdio.h>

void Display(int a)
{


  int iCnt=a;
  if (a<0)
  {
      a=-a;
  }
  for(iCnt=1;iCnt<=a;iCnt++)
  {
      printf("%d\n",iCnt);
  }

}
int main()
{
int iNo1=0;
printf("enter number\n");
scanf("%d",&iNo1);

  Display(iNo1);


    return 0;
}