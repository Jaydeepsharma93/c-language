#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("enter the num1:");
	scanf("%d",&a);
	printf("enter the num2:");
	scanf("%d",&b);
	printf("enter the num3:");
	scanf("%d",&c);
	printf("enter the num4:");
	scanf("%d",&d);
	printf("enter the num5:");
	scanf("%d",&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("num1 is max"):printf("num5 is max"):printf("num4 is max"):printf("num3 is max"):(b>c)?(b>d)?(b>e)?printf("num2 is max"):printf("num5 is max"):printf("num4 is max"):(c>d)?(c>e)?printf("num3 is max"):printf("num5 is max"):(d>e)?printf("num4 is max"):printf("num5 is max");
} 
