 #include<stdio.h>

void main()
{
	int i,x,y,z,num=0;

	
	printf("Enter the value of 1st number : ");
	scanf("%d",&x);
	
	printf("Enter the value of 2nd number : ");
	scanf("%d",&y);
	
	z = y - x;
	z = z /4;
	z = z + 1;
	
		int a[z];
	
    for(i=x; i<=y; i++)
    {
    	if(i%4==0 || i%400==0)
    	{
    		a[num] = i;
            num++;
		}
       
	}
	printf("\n");
	
	printf("here is your leap year in array between %d and %d\n",x,y);
    for(i=0; i<num; i++) 
   {
   	printf("%d ",a[i]);
   }
}
