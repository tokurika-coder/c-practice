//wap to read and print the names of student of a class
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50][50];
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the name of student :%d", i+1);
			fflush(stdin);
		gets(str[i]);
		printf("\n\n");
	}
	printf("\n the name of students are");
	for(i=0;i<n;i++)
	{
		printf("\n %s",str[i]);
	}
	
	getch();
}
