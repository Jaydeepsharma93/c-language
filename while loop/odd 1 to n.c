#include<stdio.h>

main()
{
	 int a=1,n;
	 printf("enter the value:");
	 scanf("%d",&n);
	 
	 while(a<=n)
	 {
	 	if(a%2==1)
	 	{
	 	printf("%d ",a);
	    }
	    a++;
	 }
}
