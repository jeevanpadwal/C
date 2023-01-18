#include<stdio.h>

void Display(char *str)
{
    
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }

}

void DisplayR(char *str)
{
     if(*str != '\0')
    {
        printf("%s\n",str);
        DisplayR(str+1);  //tail recurssion
    
        
    }

}

int main()
{
   char Arr[20];

   printf("Enter string \n");
   scanf(" %[^'\n']s",Arr);
   DisplayR(Arr);

    return 0;
}