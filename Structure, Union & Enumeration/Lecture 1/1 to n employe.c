#include<stdio.h>
#include<string.h>

struct Employee{
	int id,age;
    char name,city,experience,company_name,role;
};
main()
{
	int i,n;
	printf("enter the totel number of Employees : ");
	scanf("%d",&n);
	struct Employee s1[n];
	for(i=0;i<n;i++){
		printf("enter the Employeer id:");
	    scanf("%d",&s1[i].id);
	    printf("enter the name:");
	    scanf(" %[^\n]",&s1[i].name);
	    printf("enter the age:");
	    scanf("%d",&s1[i].age);
	    printf("enter your role:");
	    scanf(" %[^\n]",&s1[i].role);
	    printf("enter your city:");
	    scanf(" %[^\n]",&s1[i].city);
	    printf("enter your experience:");
	    scanf(" %[^\n]",&s1[i].experience);
	    printf("enter your company name:");
	    scanf(" %[^\n]",&s1[i].company_name);
	}
	for(i=0; i<n; i++){
		printf("%d. %d\t %s\t%d\t %s\t %s\t %s\t %s\n",i+1,s1[i].id,s1[i].name,s1[i].age,s1[i].role,s1[i].city,s1[i].experience,s1[i].company_name);
	}	

	for(i=0; i<n; i++){
		printf("%d. %d\t %s\t%d\t %s\t %s\t %s\t %s\n",i+1,s1[i].id,s1[i].name,s1[i].age,s1[i].role,s1[i].city,s1[i].experience,s1[i].company_name);
	}
}