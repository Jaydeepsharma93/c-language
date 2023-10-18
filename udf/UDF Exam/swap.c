#include<stdio.h>  
  
void swap(int x, int y)  
{  
    int c;  
  
    c = x;  
    x = y;  
    y = c;  
  
    printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
} 
  
main()  
{  
    int a, b;  
  
    printf("Enter values for a : ");  
    scanf("%d",&a);  
    printf("Enter values for b : ");  
    scanf("%d",&b);
  
    printf("\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(a, b);    
}  
  
