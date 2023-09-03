#include<stdio.h>

main()
{
	int a,b,c;
	printf("enter tha value of a:");
	scanf("%d",&a);
	printf("enter tha value of b:");
	scanf("%d",&b);
	printf("value of a=%d\n",a);
	printf("value of b=%d\n",b);
	printf("after tha Swaping\n");
	c=a;
	a=b;
	b=c;
    printf("value of a=%d\n",a);
	printf("value of b=%d",b);
	
}