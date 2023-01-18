#include<stdio.h>

void Pattern(int r)
{
    int i=0,j=0,iCnt = 1 ;
    for( i=1;i<= r ; i++)
    {
        
        for(j =1; j <= r;j++)
        {
            if(iCnt <= 9)
            {
                 printf("%d\t",iCnt);
            }
            else
            {
                iCnt = 1;
                printf("%d\t",iCnt);
            }
            iCnt++;
           
        }
        printf("\n");
    }
}

int main()
{
    int a ,b;

    printf("Enter number of rows and column");
    scanf("%d",&a);

    Pattern(a);

    return 0;

}