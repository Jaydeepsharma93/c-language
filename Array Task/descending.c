#include<stdio.h>

main()
{
	int i,j,size,r;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int a[size];
	for(i=0; i<size; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[i]>a[j])
			{	
		        r=a[j];
		        a[j]=a[i];
		        a[i]=r;
			}
    	}
  	}
		for(i=0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
}