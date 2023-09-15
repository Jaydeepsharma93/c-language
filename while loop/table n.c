#include<stdio.h>

main()
{
	int a=1,n;
	 printf("enter the value of table:");
	 scanf("%d",&n);
	 
	 while(a<=10)
	 {
	 	printf("%d * %d = %d\n",n ,a ,a*n);
	 	a++;
	 }
	
}
