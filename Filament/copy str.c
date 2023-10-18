#include<stdio.h>
#include<string.h>
main()
{
	char str[20], str2[20];
	
	printf("Enter String1 : ");
	gets(str);
		
	strcpy(str2, str);
	
	printf("\nString1 : %s", str);

	printf("\nstring2:Copy string : %s", str2);

}
