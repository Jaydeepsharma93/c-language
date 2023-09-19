#include<stdio.h>

main()
{
	 int a,n;
	 printf("enter the value:");
	 scanf("%d",&n);
	 
	 for(a=1; a<=n; a++)
	 {
	 	if(a%2==1)
	 	{
	 	  continue;
	    }
	    printf("%d ",a);
	 }
}


