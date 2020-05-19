//wap to cnvert a string in upper case
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[50],str1[50];
	int i=0;
	printf("enter a string:");
	gets(str);
	while(str[i]!=0)
	{
		str1[i]=toupper(str[i]);
		i++;
	}
	str1[i]='\0';
	printf("\n the upper case string is:%s",str1);
	getch();
}
