//intput : row=4  column=4

  /*  output :1 2 3 4
              1 2 3 4
              1 2 3 4
              1 2 3 4
  */
  #include <stdio.h>
  void Display(int iRow,int iCol) 
  {                                                                  
     int i=0;int j=0;

     for(i=1;i<=iRow;i++) 
     {
         for(j=1;j<=iCol;j++)                                                            
         {          
             printf("%d\t",j);
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