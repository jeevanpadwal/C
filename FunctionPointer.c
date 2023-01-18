#include<stdio.h>

int Addition(int a,int b)
{
    return a+b;
}

int main()
{

  int a=10,b=20,ret=0;

  int (*fptr)(int ,int);
  fptr = Addition;
  printf("Address of Addition function : %d",Addition);
  ret = fptr(a,b);

  printf("Addition is : %d",ret);


}