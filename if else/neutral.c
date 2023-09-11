#include <stdio.h>

main() 
{ 
    int A; 
  
    printf("Enter the number A: "); 
    scanf("%d", &A); 
    if (A > 0) 
    {
      printf("%d is positive ", A);
    }
    else if (A < 0)
    {
	   printf("%d is negative", A);
    }
    else
	{ 
   	  printf("%d is neutral", A);
    }
}