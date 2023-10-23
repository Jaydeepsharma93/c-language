#include <stdio.h>
main() 
{

    int a, b;
    int *p1, *p2;

    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Before swapping \na = %d\nb = %d\n", a, b);

    p1 = &a;
    p2 = &b;

    *p1 = *p1+*p2;
    *p2 = *p1-*p2;
    *p1 = *p1-*p2;

    printf("After swapping \na = %d\nb = %d", a, b);
}