#include<stdio.h>

main()
{
	int a=1,n,factorial=1;
	 printf("enter the value:");
	 scanf("%d",&n);
	 
	 do
	 {
	 	factorial=factorial*a;
	 	a++;
	 }while(a<=n);
	 printf("factorial is : %d",factorial);
}

