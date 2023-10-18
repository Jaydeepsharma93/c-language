#include<stdio.h>  
#include<string.h>
main()
{
    char str[10];
    int i,sum = 0;
    puts("enter the string:");
    gets(str);
    for (i= 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))  
        {
            sum += (str[i] - '0'); 
        }
    }
   
    printf("Sum of all digits:\n%d", sum);
    
}