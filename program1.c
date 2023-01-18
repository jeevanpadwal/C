#include<stdio.h>

int Addition(int ivalue1,int ivalue2 )
{
	
	
	int ians=0;
	ians=ivalue1+ivalue2;
	
	return ians;
}

    int main()
	{
		
		int ino1=0;
		int ino2=0;
		int ino3=0;
		
		printf("enter 1 st no\n");
		scanf("%d",&ino1);
		
		printf("enter 2 st no\n");
		scanf("%d",&ino2);
		
		  Addition(ino1,ino2);

		
		printf("addition is%d",ino3);
		
		return 0;

	}