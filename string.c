//wap to input string using gets( puts( scanf(
#include<stdio.h>
#include<string.h>
int main()
{
	char str[35];
	printf("enter the string using scanf()");
	printf("\nenter the string");
	scanf("%s",str);
	printf("\n the string is:%s",str);
	fflush(stdin);
	printf("\n enter the string using gets()");
	printf("\n enter the string");
     gets(str);
     printf("\n print the string using puts()");
     puts("\n the string is ");
     puts(str);
     printf("\n print the string using printf()");
     printf("\n the string is:%s",str);
     getch();
}
