#include<stdio.h>

main()
{
	int a,b,c;
	for(a=1; a<=5; a++)
	{
		for(c=a; c<5; c++)
		{
			printf(" ");
		}
		for(b=a; b>=1; b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}