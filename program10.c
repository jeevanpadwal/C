//0-35    fail
//35-50   pass class
//50-60   second class 
//60-70   first class 
//70......first class with distinction

#include<stdio.h>

void DisplayClass(float fMarks)
{
  if((fMarks>0.0)&&(fMarks<35.0))
  {
      printf("you are fail\n");
  }
  else if((fMarks>=35.0)&&(fMarks<50.0))
  {
      printf("pass class\n");
  }
  else if ((fMarks>=50.0)&&(fMarks<60))
  {
      printf("second class\n");
  }
  else if((fMarks>=60)&&(fMarks<70))
  {
      printf("first class\n");
  }
  else if ((fMarks>=70)&&(fMarks<100))
  {
      printf("first class with distinctio\n");
  }
  else
  {
      printf("invalid marks\n");
  }

}

int main()
{
 float fValue=0.0;


 printf("enter the persentage\n");
 scanf("%f",&fValue);

 DisplayClass(fValue);

    return 0;
}
