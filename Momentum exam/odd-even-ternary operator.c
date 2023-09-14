#include<stdio.h>

main()
{
	int a,b;
	printf("enter the num:");
	scanf("%d",&a);
	b=a/2;
	b=b*2;
	(a==b)?printf("%d is even",a):printf("%d is odd",a);
}