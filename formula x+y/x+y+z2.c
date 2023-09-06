#include<stdio.h>

main()
{
      int x,y,a,z;
        printf("value of x:");
	scanf("%d",&x);
	printf("value of y:");
	scanf("%d" ,&y);
	printf("value of z:");
	scanf("%d" ,&z);
	a=(x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	printf("(x+y+z)2:%d",a);
}
