#include<stdio.h>
#include<string.h>
void main(){

	char str[20];
	
	int numericCheck = 0,i;
	
	printf("Enter String1 : ");
	gets(str);
	
	for (i = 0; i < strlen(str); i++)
	{
	
		if (str[i] >= '0' && str[i] <= '9')
		{
			numericCheck = 1;
        }
	}
	
	if(numericCheck)
		printf("\nGiven String is numeric");
	else
		printf("\nGiven String is not numeric");

}