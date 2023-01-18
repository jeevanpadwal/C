  //pattern ptinting
  //input: 5
  //output : * * * * *
  #include <stdio.h>
  void Display(int iNo)
  {
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {

      printf("*\t");
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