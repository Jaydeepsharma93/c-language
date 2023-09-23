#include<stdio.h>

main()
{
	int n,c=0;
	printf("enter the NUM:");
	scanf("%d", &n);
	
	while(n != 0)
    {
        n /= 10;
        ++c;       
	}
	printf("Number of digits: %d", c);
}