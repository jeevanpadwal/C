#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//O_RDONLY    Read
//O_WRONLY    Write
//O_RDWR      read + write
int main()
{
    char Fname[20];
    int fd =0;          //file discriptor
    char Data[100];
    int iRet=0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    
    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }

    printf("file is open succefully creatd with FD %d\n",fd);

    return 0;
}