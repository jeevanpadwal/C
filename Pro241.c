//accept file name and display or read hole file 
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
    char Data[10];     //  Mug
    int iRet =0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    
    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }

    printf("file is open succefully creatd with FD %d\n",fd);

    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));

     
    return 0;
}