#include<stdio.h>

main()
{
	int num1 , num2 , num3 , num4 , num5;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter the num2:");
	scanf("%d",&num2);
	printf("enter the num3:");
	scanf("%d",&num3);
	printf("enter the num4:");
	scanf("%d",&num4);
	printf("enter the num5:");
	scanf("%d",&num5);
	
	if(num2<num1 && num3<num1 && num4<num1 && num5<num1){
	   printf("num1 is max");	
	}
	else if(num5<num2 && num4<num2 && num3<num2){
		printf("num2 is max");
	}
	else if(num5<num3 && num4<num3){
		printf("num3 is max");
	}
	else if(num5<num4){
	    printf("num4 is max");	
	} 
	else{
		printf("num5 is max");	
	}
}