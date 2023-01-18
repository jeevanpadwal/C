//accept string digit additiion
//recurtion

#include<stdio.h>

void Display(int iNo)
{
    static int iSum =0; 
     int i=0;
     char ch;

     for(i =0,ch='a';i<=iNo;i++,ch++)
     {
          printf("%c",ch);
     }
}

void DisplayW(int iNo)
{
    int i = 0;
    char ch ='a';

    while(i< iNo)
    {
        printf("%c\t",ch);
        ch++;
        i++;
    }
}

void DisplayR(int iNo)
{
    static int i =0;
    static char ch ='a';
    if(i < iNo)
    {
        i++;
        printf("%c",ch);
        ch++;
          DisplayR(iNo);

    }

}

int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

     DisplayR(iValue);



}