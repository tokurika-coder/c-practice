//wap to calculate the length of string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i=0,length=0;
	printf("enter a string:");
	gets(str);
	while(str[i]!=0)
	{
		length++;
		i++;
	}
	printf("the length of string is :%d",length);
	getch();
}
