//wap to concatenate two strings
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str1[50],str2[100];
	int i=0,j=0;
	printf("enter first string:");
	gets(str);
	printf("\n enter 2nd string:");	
	gets(str1);
	while(str[i]!=0)
	{
		str2[j]=str[i];
		i++; j++;
	}
	i=0;
	while(str1[i]!=0)
	{
		str2[j]=str1[i];
		i++; j++;
	}
	str2[i]='\0';
	printf("\n the combined string is:%s",str2);
	getch();
}
