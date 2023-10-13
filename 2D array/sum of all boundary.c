#include<stdio.h>

main()
{
	int i,j,n,sum=0;
	printf("enter tha size of 2D array:");
	scanf("%d",&n);
	int A[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("A[%d][%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
		for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==0 || j==0 || i==n-1 || j==n-1)
			{
				printf("%d",A[i][j]);
				sum+=A[i][j];
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("The sum of boundary elements of an Array: %d",sum);
}