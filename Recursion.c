// * * * *

#include<stdio.h>
#include<stdlib.h>

void DisplayI()
{
   auto int iCnt =0;
    while(iCnt < 4 )
    {
        printf("*\t");
        iCnt++;
    }
}
void DisplayR()
{
    static int iCnt =0;
    if(iCnt < 4 )
    {
        printf("*\t\n");
        iCnt++;
        DisplayR();
    }



}

int main()
{
   DisplayI();
   DisplayR();
    return 0;
}