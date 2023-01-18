#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char Fname[20];
    int fd =0;  //file discriptor
    char Data[100];
    int iRet=0;

    printf("Enter file name \n");
    scanf("%s",Fname);

    printf("Enter the data that you want write \n");
    scanf(" %[^'\n']s",Data);


    fd = creat(Fname,0777);
    
    if(fd == -1)
    {
        printf("unable to creat file\n");
        return -1;
    }

    printf("file is succefully creatd with FD %d\n",fd);

   iRet =  write(fd,Data,strlen(Data));
   printf("%d bytes sucessfully written in the file\n",iRet);

    return 0;
}