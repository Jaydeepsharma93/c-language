#include<stdio.h>

main()
{
	char a;
	printf("enter tha week latter");
	scanf("%c",&a);
	
	switch(a)
	{
		case 1 :printf("M. Monday");break;
		case 2 :printf("T. Tuesday");break;
		case 3 :printf("W. Wednesday");break;
		case 4 :printf("TH.Thursday");break;
		case 5 :printf("F. Friday");break;
		case 6 :printf("S. Saturday");break;
		case 7 :printf("SU. Sunday");break;
        default : printf("enter valid latter"); 
	}
}
