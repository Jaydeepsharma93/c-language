#include<stdio.h>

main()
{
	int a,n,factorial=1;
	 printf("enter the value:");
	 scanf("%d",&n);
	 
	 for(a=1; a<=n; a++)
	 {
	 	factorial=factorial*a;
	 }
	 printf("factorial is : %d",factorial);
}

