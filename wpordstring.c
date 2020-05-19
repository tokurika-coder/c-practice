//wap to count the no of words in a sentence
#include<string.h>
#include<stdio.h>
int main()
{
	char str[50];
	int i=0,count=0;
	printf("enter a sentence:");
	gets(str);
	while(str[i]!=0)
	{
		if(str[i]==' '&&str[i+1]!=' ')
		count++;
		i++;
	}
	str[i]='\0';
	printf("\n the no of words in given sentence is :%d",count+1);
	getch();
}
