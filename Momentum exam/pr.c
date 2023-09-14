#include<stdio.h>

main()
{
	int physcis,chemistry,bio,maths,computer,total;
	float pr;
	
	printf("enter physcis marks:");
	scanf("%d",&physcis);
	printf("enter chemistry marks:");
	scanf("%d",&chemistry);
	printf("enter bio marks:");
	scanf("%d",&bio);
	printf("enter maths marks:");
	scanf("%d",&maths);
	printf("enter computer marks:");
	scanf("%d",&computer);
	total=physcis+chemistry+bio+maths+computer;
	pr=(total*100)/500;
	
	   if(pr>=90 && pr<=100)
       {
         printf("Your grade is A");
       }
	   else if(pr>=80 && pr<=89)
       {
         printf("Your grade is B");
       }
	   else if(pr>=70 && pr<=79)
       {
         printf("Your grade is C");
       }
	   else if(pr>=60 && pr<=69)
       {
         printf("Your grade is D");
       }
	   else if(pr>=50 && pr<=59)
       {
         printf("your grade is E");
      }
	  else if(pr>=40 && pr<=49)
      {
        printf("Your grade is F");
      }
	  else
      {
        printf("you are fail");
      }
	
}
