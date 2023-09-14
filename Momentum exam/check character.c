#include<stdio.h>

main()
{
	char a;
	printf("enter any character:");
	scanf("%c",&a);
	
	if((a>=97 && a<=122) || (a>=65 && a<=90))
	{
		printf("%c is alphabet",a);
	}
	else if(a>=48 && a<=57)
	{
	    printf("%c is number",a);	
	}
	else
	{
		printf("%c is special character",a);
	}
}
