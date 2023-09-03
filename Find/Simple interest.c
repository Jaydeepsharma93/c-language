#include<stdio.h>

main()
{
 	double A,p,r,t;
 	int f=100;

 	printf("enter the principal amount of money:");
 	scanf("%lf",& p);
 	printf("enter the number of periods:");
 	scanf("%lf",& t);
 	printf("enter the interest rate per period:");
 	scanf("%lf",& r);
 
 	A=p*t*r/f;
 	printf("%lf",A);
 	
}