//wap to copy a string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str1[50];
	int i=0;
	printf("enetr a string:");
	gets(str);
	while(str[i]!=0)
	{
		str1[i]=str[i];
		i++;
	}
	str1[i]='\0';
	printf("\n the copied string is:%s",str1);
	getch();
}
