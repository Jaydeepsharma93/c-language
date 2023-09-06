#include<stdio.h>

intmain()
{
	int x,y,z,a;

	printf("value of x:");
	scanf("%d",&x);
	printf("value of y:");
	scanf("%d" ,&y);
	printf("value of z:");
	scanf("%d" ,&z);
	a=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
	printf("(x+y+z)3:%d",a);
	
}
