#include<stdio.h>

main()
{
	int a,b;
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=5; b++)
		{
			if(a==1 || a==3 || b==1 || b==5 )
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

}
