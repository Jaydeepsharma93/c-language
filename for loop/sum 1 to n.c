#include<stdio.h>
main()
{
	int a,n,sum=0;
	 printf("enter the value:");
	 scanf("%d",&n);
	 
	 for(a=1; a<=n; a++)
	 {
	 	sum=sum+a;
     }
	 printf("sum is : %d",sum);
}

