#include<stdio.h>
main()
{
	int x,y,a;

	printf("value of x:");
	scanf("%d",&x);
	printf("value of y:");
	scanf("%d" ,&y);
	a=(x*x*x)+((3*x*y)*(x*y))+(y*y*y);
	printf("(x+y)3:%d",a);
	
}
