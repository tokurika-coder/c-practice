//wap to pass a string using function
#include<stdio.h>
void dispstr(char[]);
int main()
{
	char word[30];
	printf("enter a sentence");
	gets(word);
	dispstr(word);
	getch();
}
void dispstr(char str[])
{
	printf("%s",str);
}
