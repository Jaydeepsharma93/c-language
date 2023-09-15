#include<stdio.h>

main()
{
	int a=1,n,factorial=1;
	 printf("enter the value:");
	 scanf("%d",&n);
	 
	 while(a<=n)
	 {
	 	factorial=factorial*a;
	 	a++;
	 }
	 printf("factorial is : %d",factorial);
}
