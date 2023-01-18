// 123
//out =321

#include<stdio.h>
#include<stdlib.h>

void DisplayI(int iNo)
{
   int iDigit =0;
    while(iNo !=0 )
    {
        printf("%d\t",iNo % 10);
        iNo = iNo/10;
    }
}
void DisplayR(int no)
{

   
    if(no !=0 )
    {
      
        no = no/10 ;
         DisplayR(no);
        printf("%d\t", no % 10);
    
    }

}

int main()
{
   DisplayI(123);
   DisplayR(123);
    return 0;
}