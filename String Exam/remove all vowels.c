#include <stdio.h>
#include<string.h>
void solve()
{
    char c[10];
    int i, j, l;
    puts("Enter a string : ");
    gets(c);

    l = strlen(c);

    for (i = 0; i < l; i++) 
	{
        if (c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U' || c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' ) 
		 {
            for (j = i; j < l; j++) 
			{
                c[j] = c[j + 1];
            }
            i--;
            l--;
        }
        c[l + 1] = '\0';
    }
   printf("the final string : %s", c);
 
}
int main()
{
    solve();
    return 0;
}