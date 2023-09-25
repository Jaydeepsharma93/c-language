#include<stdio.h>

main()
{
	int a, b;
	for(a=5; a>=1; a--)
	{
		for(b=5; b>=a; b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}
