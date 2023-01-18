#include<stdio.h>

extern int Addition(int no1,int no2);
int main()
{
int A=10;
int B=20;
int res=0;

printf("Enter first number \n");
scanf("%d",&A);

printf("Enter second number \n");
scanf("%d",&B);
res=Addition(A,B);

printf("Addition of two numbers %d\n",res);


return 0;
}