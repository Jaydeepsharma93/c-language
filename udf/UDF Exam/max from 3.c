#include<stdio.h>

int max(int num1,int num2,int num3)
{
	if(num2<num1 && num3<num1){
	   printf("num1 is max");	
	}
	else if(num3<num2){
		printf("num2 is max");
	}
	else{
		printf("num3 is max");
	}
}

main()
{
	int num1 , num2 , num3;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter the num2:");
	scanf("%d",&num2);
	printf("enter the num3:");
	scanf("%d",&num3);
	max(num1,num2,num3);	
}