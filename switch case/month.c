#include<stdio.h>

main()
{
	int a;
	printf("enter tha months num:");
	schanf("%d",&a);
	
	switch(a)
	{
		case 1 :printf("1. January");break;
		case 2 :printf("2. February");break;
		case 3 :printf("3. March");break;
		case 4 :printf("4. April");break;
		case 2 :printf("5. May");break;
		case 2 :printf("6. June");break;
		case 2 :printf("7. July");break;
		case 2 :printf("8. August");break;
		case 2 :printf("9. September");break;
		case 2 :printf("10. October");break;
		case 2 :printf("11. November");break;
		case 2 :printf("12. December");break;
		default : printf("enter valid month number"); 
	}
}