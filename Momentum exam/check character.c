#include<stdio.h>

main()
{
	char a;
	printf("enter any value:");
	scanf("%c",&a);
	
	if(a>=65 && a<=90)
	{
		printf("%c is capital alphabet",a);
	}
	else if(a>=97 && a<=122)
	{
		printf("%c is small alphabet",a);
	}
	else if(a<=48 && a<=57)
	{
	    printf("%d in numder");	
	}
	else
	{
		printf("in special char");
	}
}
