#include<stdio.h>

main()
{
	int a;
	float c,b;
	printf("enter tha value: ");
	scanf("%d",&a);
	for(b=1; b<=a; b++)
	{
	    c=a/b;
	    if(c==b) 
	    {
	    	printf("the square root of %d is: %.0f",a,c);
		}
	}
}