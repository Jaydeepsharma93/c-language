#include<stdio.h>

int sum(int a)
{
	if(a==0)
	{
		return 1;
	}
	return a+sum(a-1);
}

main()
{
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	
	printf("%d",sum(n));
}

