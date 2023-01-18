#include<stdio.h>

int Addition(int , int );

int main()
{
    int A = 10;
    int B = 11;
    int Ret = 0;

    Ret = Addition(A,B);

    printf("%d",Ret);
    return 0;
}

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;

    return Ans;
}