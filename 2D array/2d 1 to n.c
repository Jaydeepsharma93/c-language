#include<stdio.h>

main()
{
	int i,j,a,b;

	printf("enter the size of 2d array: row:");
	scanf("%d",&a);
	printf("enter the size of 2d array: colume:");
	scanf("%d",&b);
	
	int arr[a][b];
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
     	{
     		printf("arr[%d][%d]",i,j);
     		scanf("%d",&arr[i][j]);
        }
	}
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
     	{
     		printf("arr[%d][%d]:%d  ",i,j,arr[i][j]);
        }
	}
	
	
}
