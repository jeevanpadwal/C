//count the data or no from file using program
//accept file name and display or read hole file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int FileLength(char Fname[])
{
    int fd =0; 
    char Data[10];    
    int iRet =0;
    int iSum=0;

     fd = open(Fname,O_RDWR);
    
    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }

    printf("file is open succefully creatd with FD %d\n",fd);

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        iSum = iSum + iRet;

    }
    return iSum;
    close(fd);   
}


    int main()
   {
      char Fname[20];
      int iRet =0;

    printf("Enter file name to open\n");
      scanf("%s",Fname);

      iRet = Filelength(Fname);
      printf("%d",iRet);
      
       return 0;
}