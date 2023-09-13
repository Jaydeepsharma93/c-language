#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("enter the num1:");
	scanf("%d",&a);
	printf("enter the num2:");
	scanf("%d",&b);
	printf("enter the num3:");
	scanf("%d",&c);
	printf("enter the num4:");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)?printf("num1 is max"):printf("num4 is max"):printf("num3 is max"):(b>c)?(b>d)?printf("num2 is max"):printf("num4 is max"):(c>d)?printf("num3 is max"):printf("num4 is max");
} 
