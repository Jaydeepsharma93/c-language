#include<stdio.h>

main()
{
	int a, b, c;
	for(a=1; a<=5; a++)
	{
		for(c=a; c>1; c--)
		{
			printf(" ");
		}
		for(b=a; b<=5; b++)
		{
			printf("%c",b+64);
		}
		printf("\n");
	}
}
