#include<stdio.h>
main()
{
	int s,h,d,t,a;
	printf("enter basic salary:");
	scanf("%d",&s);
	h=s*10/100;
	d=s*8/100;
	t=s*5/100;
	a=s+h+d+t;
	printf("%d\n",h);
	printf("%d\n",d);
	printf("%d\n",t);
	printf("gross salary:%d\n",a);
}
