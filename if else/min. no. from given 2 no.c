#include<stdio.h>

main()
{
	int num1 , num2;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter the num2:");
	scanf("%d",&num2);
	if(num1<num2)
	{
	   printf("num1:%d is min",num1);	
	}
	else
	{
		printf("num2:%d is min",num2);
	}
	
}
