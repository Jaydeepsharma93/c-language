#include<stdio.h>

main()
{
	int a, b, c;
	for(a=5; a>=1; a--)
	{
		for(c=a; c>1; c--)
		{
			printf(" ");
		}
		for(b=a; b<=5; b++)
		{	
			printf("%d",a);
		}
		printf("\n"); 
	}
}