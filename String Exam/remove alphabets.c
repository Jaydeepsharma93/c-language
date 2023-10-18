#include<stdio.h>
#include<string.h>

int Remove(char *string)
{
	int l=0,i,j,k;
    l=strlen(string);

	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if((string[j]>='a' && string[j]<='z') || (string[j]>='A' && string[j]<='Z'))
			{
				for(k=j;k<l;k++)
				{
					string[k] = string[k+1];
				}
				l--;
			}
		}
	}
}
int main()
{
	char string[50];

	puts("Enter the string : ");
	gets(string);

	Remove(string);
	printf("Final string is : %s",string);
	return 0;
}