#include"header2.h"

///////////////////////////////////////////////////
// write a program to perform addition of 2 numbers 
///////////////////////////////////////////////////
    int main()
	{
		
		int ino1=0;
		int ino2=0;
		int ino3=0;
		
		printf("enter 1 st no\n");
		scanf("%d",&ino1);
		
		printf("enter 2 st no\n");
		scanf("%d",&ino2);
		
		ino3 = Addition(ino1,ino2);

		
		printf("addition is%d",ino3);
		
		return 0;

	}

////////////////////////////////////////
//
//Input: 10,11
//output:21
//                      
//////////////////////////////////////////