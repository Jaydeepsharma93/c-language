#include<stdio.h>

main()
{
	int a,b,c=3;
	for(a=1; a<=4; a++)
	{
		c+=2;
		for(b=1; b<=7; b++)
		{
			if(a+b==5 || a+b==c)
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