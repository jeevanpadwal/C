


//maharajancha zenda
#include<stdio.h>
#include<stdlib.h>

void Display(int iRow,int iCol)
{
    int iCnt=0,i=0,j=0;
    char ch='\0';

    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>=1;j--)
        {
            if(i==j)
            {
               printf("$\t");
            }
            else 
            {
                printf("*\t");
            }
              
        }
        printf("\n");
    }
   
    
    }

int main()
{

    int iValue1=0,iValue2=0;

  printf("enter rows \n");
  scanf("%d",&iValue1);

  printf("ente column\n");
  scanf("%d",&iValue2);

  Display(iValue1,iValue2);
     
    return 0;
}
