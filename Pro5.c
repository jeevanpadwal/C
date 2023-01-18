//accept string and count small character

#include<stdio.h>

int CountSmall(char arr[])
{
    int iCnt =0;

    while(*arr !='\0')
    {
        if(*arr >='a' && *arr <='z')
        {
            iCnt++;
        }
        arr++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet =0;

    printf("Enter string :\n");
    scanf(" %[^'\n']s",arr);

    iRet = CountSmall(arr);
    printf("Small characters is :%d",iRet);

}