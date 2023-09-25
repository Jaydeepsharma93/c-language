#include<stdio.h>

main()
{
	int a, b, c=1;
	for(a=1; a<=5; a++)
	{
		for(b=a; b>=1; b--)
		{
			printf("%d",c++);
		}
		printf("\n");
	}
}
