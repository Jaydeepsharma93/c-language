#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter the num1:");
	scanf("%d",&a);
	printf("enter the num2:");
	scanf("%d",&b);
	printf("enter the num3:");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("num1 is max"):printf("num3 is max"):(b>c)?printf("num2 is max"):printf("num3 is max");
} 
