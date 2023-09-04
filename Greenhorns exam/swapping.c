#include<stdio.h>

main()
{
	int a,b;
	printf("enter tha value of a:");
	scanf("%d",&a);
	printf("enter tha value of b:");
	scanf("%d",&b);
	printf("value of a=%d\n",a);
	printf("value of b=%d\n",b);
	printf("after tha Swaping\n");
	a=a*b;
	b=a/b;
	a=a/b;
    printf("value of a=%d\n",a);
	printf("value of b=%d",b);
}

