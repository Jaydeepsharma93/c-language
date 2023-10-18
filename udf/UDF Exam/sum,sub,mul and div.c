#include<stdio.h>

void sum(int x,int y)
{
    printf("x+y=%d\n",x+y);
}
void sub(int x,int y)
{
    printf("x-y=%d\n",x-y);
}
void mult(int x,int y)
{
    printf("x*y=%d\n",x*y);
}
void div(int x,int y)
{
    printf("x/y=%f\n",(float)x/y);
}
void main()
{
int a,b;
printf("enter the x:");
scanf("%d",&a);
printf("enter the y:");
scanf("%d",&b);
sum(a,b);
sub(a,b);
mult(a,b);
div(a,b);
getch();
}