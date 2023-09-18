#include<stdio.h>

main()
{
	 int a=1,n;
	 printf("enter the value:");
	 scanf("%d",&n);
	 
	 do
	 {
	 	printf("%d ",n);
	 	n--;
	 }while(a<=n);
}

