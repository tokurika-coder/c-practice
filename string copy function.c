//wap to copy one string into another string using function
#include<stdio.h>
#include<string.h>
void dispstr(char[],char[]);
int main()
{
	char word[30];
	printf("enter a sentence");
	gets(word);
	dispstr(word);
	getch();
}
void dispstr(char str[], char str1[])
{
	int i=0;
	while(str[i]!=0)
	{
		str1[i]=str[i];
		str[i]++;
	}
	str1[i]='\0';
	printf("\n the string is :%s",str1);
}
