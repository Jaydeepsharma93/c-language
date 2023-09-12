#include<stdio.h>

main()
{
	int num1 , num2;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter the num2:");
	scanf("%d",&num2);
	if(num2<num1)
	{
	   printf("num1:%d is max",num1);	
	}
	else
	{
		printf("num2:%d is max",num2);
	}
	
}