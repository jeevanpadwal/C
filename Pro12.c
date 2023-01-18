//campere two files 

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdbool.h>
#include<string.h>

#define FILESIZE 1024

bool FileCompare(char Source[],char Destination[])
{
    int FDsrc = 0;int FDdest = 0;int iRet1 =0,iRet2=0,iCmp=0;
    char Buffer1[FILESIZE];
    char Buffer2[FILESIZE];

    FDsrc = open(Source,O_RDONLY);

    if(FDsrc == -1)
    {
        printf("Unable to open source file :");
        return false;
    }

    FDdest = open(Destination,O_RDWR);

    if(FDdest == -1)
    {
        printf("Unable to creat destination :");
        return false;
    }

    while(1)
    {
        iRet1= read(FDsrc,Buffer1,FILESIZE);
        iRet2 = read(FDdest,Buffer2,FILESIZE);

        if((iRet1 == 0)||(iRet2 == 0) || (iRet1 != iRet2))
        {
            break;
        }

        iCmp =memcmp(Buffer1,Buffer2,iRet1);
        
        if(iCmp != 0)
        {
            break;
        }
    }

    if(iRet1 == 0 && iRet2 ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
   
    close(FDsrc);
    close(FDdest);


}

int main()
{
    char Fname1[20];
    char Fname2[20];
    bool bRet;

    printf("Enter first file name which contains data :\n");
    scanf("%s",Fname1);

    printf("Enter second file name  :\n");
    scanf("%s",Fname2);

    bRet = FileCompare(Fname1,Fname2);
    if(bRet == true)
    {
        printf("Files are same ");
    }
    else
    {
        printf("Files are not same");
    }


    return 0;
}

