#include<stdio.h>

main()
{
	int n,i,sum=0;

	printf("enter tha size of array:",n);
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
	  printf("a[%d]:",i);
	  scanf("%d",&a[i]);	
	}
	for(i=0; i<n; i++)
	{
	  printf("a[%d]:%d  ",i,a[i]);
	  sum+=a[i];	
	}
	printf("\nsum of array is:%d",sum);
}