#include<stdio.h>

struct student{
    int id;
    char name[100];
    int age;
    char course[50];
    char city[50];
    char standard;
    char school[150];
}s1,s2,s3;
main()
{
	
	printf("enter the student id:");
	scanf("%d",&s1.id);
	printf("enter the name:");
	scanf(" %[^\n]",&s1.name);
	printf("enter the age:");
	scanf("%d",&s1.age);
	printf("enter your course:");
	scanf(" %[^\n]",&s1.course);
	printf("enter your city:");
	scanf(" %[^\n]",&s1.city);
	printf("enter your std:");
	scanf(" %[^\n]",&s1.standard);
	printf("enter your school name:");
	scanf(" %[^\n]",&s1.school);
	
	printf("\nenter the student id:");
	scanf("%d",&s2.id);
	printf("enter the name:");
	scanf(" %[^\n]",&s2.name);
	printf("enter the age:");
	scanf("%d",&s2.age);
	printf("enter your course:");
	scanf(" %[^\n]",&s2.course);
	printf("enter your city:");
	scanf(" %[^\n]",&s2.city);
	printf("enter your std:");
	scanf(" %[^\n]",&s2.standard);
	printf("enter your school name:");
	scanf(" %[^\n]",&s2.school);
	
	printf("\nenter the student id:");
	scanf("%d",&s3.id);
	printf("enter the name:");
	scanf(" %[^\n]",&s3.name);
	printf("enter the age:");
	scanf("%d",&s3.age);
	printf("enter your course:");
	scanf(" %[^\n]",&s3.course);
	printf("enter your city:");
	scanf(" %[^\n]",&s3.city);
	printf("enter your std:");
	scanf(" %[^\n]",&s3.standard);
	printf("enter your school name:");
	scanf(" %[^\n]",&s3.school);
	
	printf("\n1.\t%d\t %s\t%d\t %s\t %s\t%d\t %s\n",s1.id,s1.name,s1.age,s1.course,s1.city,s1.standard,s1.school);
	printf("\n2.\t%d\t %s\t%d\t %s\t %s\t%d\t %s\n",s2.id,s2.name,s2.age,s2.course,s2.city,s2.standard,s2.school);
	printf("\n3.\t%d\t %s\t%d\t %s\t %s\t%d\t %s\n",s3.id,s3.name,s3.age,s3.course,s3.city,s3.standard,s3.school);
}