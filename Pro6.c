//accept string and count small character
//recurtion

#include<stdio.h>

int CountSmall(char arr[])
{
    static int iCnt =0;

    if(*arr !='\0')
    {
        if(*arr >='a' && *arr <='z')
        {
            iCnt++;
        }
        arr++;
        CountSmall(arr);
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