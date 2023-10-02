#include<stdio.h>

main()
{
	int n,i,a[5];
    printf("enter any 5 table num:\n");
	for(i=0; i<5; i++)
	{
	  printf("a[%d]:",i);
	  scanf("%d",&a[i]);	
	}
	for(n=1; n<=10; n++)
	{
		for(i=0; i<5; i++)
		{
			printf("%d * %d = %d\t\t ",a[i],n,a[i]*n);
		}
	}
}