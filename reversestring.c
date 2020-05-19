//wap to print reverse of a given string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str1[50];
	int i=0,k=0;
	printf("enter a string:");
	gets(str);
	while(str[k]>0)
	{
		str1[i]=str[k];
		i++;  k++;
	}
//	str1[i]='\0';
	printf("reverse string is :%s",str1);
	getch();
}


