#include<stdio.h>

main()
{
	int a, b, c;
	for(a=1; a<=5; a++)
	{
		for(c=a; c<5; c++)
		{
			printf("  ");
		}
		for(b=1; b<=a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
}