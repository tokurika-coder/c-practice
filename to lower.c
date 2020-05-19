//wap to read a character in upper case and then print it in lower case AND VICE VERSA
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	printf("%c",toupper(ch));
	getch();
}
