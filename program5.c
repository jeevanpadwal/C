//program to display number from user on screen using while loop


#include<stdio.h>

void Display(int a)
{


  int iCnt=0;
  if (a<0)
  {
      a=-a;
  }
  /*by using for loop
       1      2       3
  for(iCnt=1;iCnt<=a;iCnt++)
  {                        
      printf("%d\n",iCnt);  4
  }
  
*/


// using while loop
iCnt=1;  //1
 
while(iCnt<=a)//2
{
     printf("%d\n",iCnt)//2
     iCnt--; //3
     
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