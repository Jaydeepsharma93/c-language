#include<stdio.h>

int factorial(int a)
{
	if(a==1)
	{
		return 1;
	}
	return a*factorial(a-1);
}

main()
{
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	
	printf("%d",factorial(n));
}

