//wap to input two strings and tell that the strings are same or not
#include<stdio.h>
#include<string.h>
int main()
{
	char str[45],str1[45];
	printf("enter first string: ");
	gets(str);
	printf("\n enter second string:");
	gets(str1);
	if(strcmp(str,str1)==0)
	printf("\n the strings are same");
	else if(strcmp(str,str1)==1)
	printf("\n first string is greater ");
	else
	printf("\n second string is geater");
	getch();
	}
