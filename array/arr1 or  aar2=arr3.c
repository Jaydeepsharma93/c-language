#include<stdio.h>

main()
{
	int a,b,i,j=0;
	printf("Enter the size of first array : ");
	scanf("%d",&a);
	printf("Enter the size of second array : ");
	scanf("%d",&b);
	int c=a+b,arr1[a],arr2[b],arr3[c];
	for(i=0; i<a; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&arr1[i]);
	}
	printf("\n");
	for(i=0; i<b; i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<a;i++)
	{
		arr3[i] = arr1[i];
	}
	for(i=a; i<c; i++)
	{
		
		arr3[i] = arr2[j];
		j++;
	}
	for(i=0; i<c; i++)
	{
	printf("\narr3[%d] = %d",i,arr3[i]);
    }
}