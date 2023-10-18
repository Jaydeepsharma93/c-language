#include<stdio.h>
#include<string.h>
main()
{
    char str[20];
	
	int digitFreq = 0, AlphabetFreq = 0, SpecialCharFreq = 0,i;
	
	printf("Enter String1 : ");
	gets(str);
	
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			digitFreq ++;
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			AlphabetFreq++;
		else
			SpecialCharFreq++;
	}
	
	
	printf("\nNo. of Digits : %hi\nNo. of Alphabet : %hi\nNo. of Special Character : %hi\n", digitFreq, AlphabetFreq, SpecialCharFreq);
}