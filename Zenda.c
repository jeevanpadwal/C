#include<stdio.h>

void Zenda(int row,int col)
{
    for(int i =0;i <row;i++)
    {
        for(int j =0; j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }

     for(int i =row ; i >=1;i--)
    {
        for(int j = 0;j < col ;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}

int main()
{
    int irow =0,icol=0;
    printf("Enter number of rows");
    scanf("%d",&irow);

    printf("Enter number of column");
    scanf("%d",&icol);

    Zenda(irow,icol);

    return 0;
}