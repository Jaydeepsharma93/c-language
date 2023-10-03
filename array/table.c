#include<stdio.h>

main()
{
	int n,i,b;
	printf("enter size of array:");
	scanf("%d",&b);
	int a[b];
    printf("enter any table num:\n");
	for(i=0; i<b; i++)
	{
	  printf("a[%d]:",i);
	  scanf("%d",&a[i]);	
	}
	for(n=0; n<b; n++)
	{
		for(i=1; i<=10; i++)
		{
			printf("%d * %d = %d\n",a[n],i,a[n]*i);
		}
		printf("\n\n");
	}
}
