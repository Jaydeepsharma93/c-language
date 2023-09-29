#include<stdio.h>

main()
{
	int a,b,c;
	for(a=1; a<=5; a++)
	{
		for(c=1; c<a; c++)
		{
			printf(" ");
		}
		for(b=a; b<=5; b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}