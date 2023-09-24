#include<stdio.h>

main()
{
	int prime=2, n=50, sum=0;
	printf("prime numbers between 1 to 50=\n");
	printf("2 3 5 7 ");
	
	start:
	if(prime<=n)
	{
		prime++;
	   if(prime%2!=0 && prime%3!=0 && prime%5!=0 && prime%7!=0)
	   {
	        printf("%d ",prime);
	        sum=sum+prime;
	   }
       goto start;
    }
    printf("\n");
   sum=sum+2+3+5+7;
    printf("the sum of prime numbers between 1 to 50 is:%d",sum);
}
