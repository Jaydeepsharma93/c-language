#include<stdio.h>

main()
{
	int a, b, c;
	for(a=5; a>=1; a--)
	{
		for(c=5; c>a; c--)
		{
			printf(" ");
		}
		for(b=1; b<=a; b++)
		{
			printf("%c",b+64);
		}
		printf("\n");
	}
}
