#include<stdio.h>

main()
{
	int n,i;
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
		a[i]*=a[i];
	}
	printf("The squares are:");
	for(i=0; i<n; i++)
	{
	  printf("a[%d]=%d  ",i,a[i]);
	}
}