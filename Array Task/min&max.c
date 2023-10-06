#include<stdio.h>

main()
{
	int i,n,min,max;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements of array:\n");
	for(i=0; i<n; i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=0; i<n; i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("min of array is: %d\n",min);
	printf("max of array is: %d",max);
	
}