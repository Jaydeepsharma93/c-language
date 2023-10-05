#include<stdio.h>

main()
{
	int n,i;
	printf("enter tha size of array:",n);
	scanf("%d",&n);
	int a[n],b[n],sum[n];
	for(i=0; i<n; i++)
	{
	  printf("a[%d]:",i);
	  scanf("%d",&a[i]);	
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
	  printf("b[%d]:",i);
	  scanf("%d",&b[i]);
    }
	for(i=0; i<n; i++)
	{
	    sum[i]=a[i]+b[i];
	}
	printf("\nArray C is:");
	for(i=0; i<n; i++)
	{
	   printf("%d ",sum[i]);
    }
}