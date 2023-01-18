#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd =0;  //file discriptor

    printf("Enter file name \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    
    if(fd == -1)
    {
        printf("unable to creat file\n");
        return -1;
    }

    printf("file is succefully creatd with FD %d\n",fd);

    return 0;
}