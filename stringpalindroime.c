//wap to check wheather a given string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],str1[30];
	printf("enter a string:");
	gets(str);
	strcpy(str1,str);
	strrev(str);
	if(strcmp(str,str1)==0)
	printf("\n string is palindrome");
	else
	printf("\n string is not palindrome");
	getch();
}
