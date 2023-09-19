#include<stdio.h>

main()
{
	int a=1,n,sum=0;
	printf("enter the valu n:");
	scanf("%d",&n);
	
	start :
	sum=sum+a;
	a++;
	if(a<=n)
	{
       goto start;
	}
	printf("sum is=%d",sum);
}
