#include<stdio.h>

main()
{
	int a, b;
	for(a=2; a<=6; a++)
	{
		for(b=2; b<=a; b++)
		{
			printf("%d",b%2);
		}
		printf("\n");
	}
}
