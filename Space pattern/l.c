#include<stdio.h>

main()
{
	int a, b;
	for(a=1; a<=7; a++)
	{
		for(b=1; b<=5; b++)
	    {
	    if(a==7 || b==1)
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