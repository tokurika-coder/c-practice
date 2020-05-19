//wap to print a character and also print asccii value and print it in upper case
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	char *pch;
	pch=&ch;
	printf("enter the character:");
	scanf("%c",pch);
	printf("\n the ascii value is:");
	printf("%c   %d",ch,ch);
	printf("\n the character in upper case is:%c",toupper(ch));
	getch();
 } 
