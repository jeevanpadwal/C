//intput :5  //pattern ptinting
  //input: 5
  //output : 5 4 3 2 1
  #include <stdio.h>
  void Display(int iNo)
  {
    int iCnt=0;

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
  }
  int main()
  {
    int iValue=0;
  
    printf("enter the value");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
  }