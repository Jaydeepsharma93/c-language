#include<stdio.h>

main()
{
	int a, b;
	for(a=1; a<=5; a++)
	{
		for(b=a; b>=1; b--)
		{
			(b%2==0)?printf("|"):printf("-");
		}
		printf("\n");
	}
}
