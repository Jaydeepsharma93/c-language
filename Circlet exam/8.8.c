#include<stdio.h>

main()
{
	int a,b;
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d",b+44);
		}
		printf("\n");
	}
}