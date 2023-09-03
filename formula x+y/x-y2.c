#include<stdio.h>

main()
{
	int x,y,a;

	printf("value of x:");
	scanf("%d",&x);
	printf("value of y:");
	scanf("%d" ,&y);
	a=(x*x)-(2*x*y)+(y*y);
	printf("(x-y)2:%d",a);
	
}
