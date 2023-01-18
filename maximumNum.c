#include<stdio.h>

int main()
{
	int a=0;
	int b=0;
	
	printf("enter first number");
	scanf("%d",&a);
	
	printf("enter second number");
	scanf("%d",&b);

	if(a>=b)
	{
		if(a=b)
		{
			printf("Both numbers are equal");
		}else
		{
			printf("maximum number is: \n",a);
		}
	}
	
	else
	{
		printf("maximum number is: %d\n",b);
	}


return 0;
}