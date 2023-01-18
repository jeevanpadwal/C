//intput : row=4  column=4

  /*  output :* * * *
              * * * *
              * * * * 
              * * * *
 */
  #include <stdio.h>
  void Display(int iRow,int iCol)
  {
      int i=0,j=0;
      for(j=1;j<=iRow;j++)  //outer
      { 
        for(i=1;i<=iCol;i++) //inner
        {
            printf("*\t");
        }
        printf("\n");
      }

  }
  int main()
  {
    int iValue1=0,iValue2=0;
  
    printf("enter Number of row");
    scanf("%d",&iValue1);

    printf("Enter the number of column");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
    

  }