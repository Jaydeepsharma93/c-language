#include<stdio.h>

main()
{
	int i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0; i<n; i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=n-1; i>=0; i--){
		printf("%d ",a[i]);
	}
}