//WAP TO CHECK WHEATHER A GIVEN CITY EXIST IN GIVEN CITY LIST OR NOT
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50][50],name[50];
	int i,n,found=0;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("\nenter name in list:");
	for(i=0;i<n;i++)
	scanf("%s",str[i]);
	printf("\n enter the name of city to be found:");
	for(i=0;i<n;i++)
	    scanf("%s",name[i]);
	    for(i=0;i<n;i++)
		if(strcmp(str[i],name)==0)
		{
			found=1;
			break;
	}
		if(found==1)
		printf("\n %s is at the location:%d",name,i+1);
		else
		printf("%s not found",name);
	getch();
}
