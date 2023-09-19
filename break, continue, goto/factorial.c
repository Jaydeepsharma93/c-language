#include<stdio.h>

main()
{
	int a=1,n,factorial=1;
	printf("enter the valu n:");
	scanf("%d",&n);
	
	start :
	factorial*=a;
	a++;
	if(a<=n)
	{
       goto start;
	}
	printf("factorial is=%d",factorial);
}
