//write a program to detrmine a person is elegible to vote or not
#include<stdio.h>
int main()
{
	int age;
	printf("enter the age of person");
	scanf("%d",&age);
	age>18?printf("person is elegible"):printf("person is not elegible");
	return 0;
	
}
