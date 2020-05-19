//wap of string using functions
#include<stdio.h>
#include<string.h>
int main()
{
	char str[45],str1[45];
	printf("enter the string:");
	gets(str);
	printf("\n enter thr second string: ");
	gets(str1);
	printf("\n the reverse of string is:%s",strrev(str));
	printf("\n the upper case of string is:%s",strupr(str));
	printf("\n the lower case of string is:%s",strlwr(str));
	printf("\n the concatenation of string is:%s",strcat(str,str1));
	printf("\n the copied string is:%s",strcpy(str,str1));
	printf("\n the length of string is:%d",strlen(str));
	printf("\n the original string is:%s",str);
	getch();
}
