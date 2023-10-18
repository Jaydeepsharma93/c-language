#include <stdio.h>
#include <string.h>
 
main()
{
    char str[10];
    puts("enter the string:");
    gets(str);
    int n = 0,l = strlen(str) - 1;

    while (l > n) 
	{
        if (str[n++] != str[l--])
		{
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }
    printf("%s is a palindrome\n", str);
}