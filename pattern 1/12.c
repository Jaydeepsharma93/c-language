#include<stdio.h>

main()
{
	int a, b;
	for(a=5; a>=1; a--)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}
