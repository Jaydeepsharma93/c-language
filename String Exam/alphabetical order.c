#include <stdio.h>
#include <string.h>
main()
{
	char str[10],t;
    puts("enter the string:");
    gets(str);
	int i,j,l;
    l = strlen(str);
	for (i = 0; i < l-1; i++) 
	{
		for (j = i+1; j < l; j++) 
		{
			if (str[i] > str[j]) 
			{
					t = str[i];
					str[i] = str[j];
					str[j] = t;
			}
		}
	}
	printf("The sorted string is : %s", str);
}