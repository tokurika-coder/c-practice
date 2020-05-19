//wap to print reverse of a given string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str1[50];
	int i,rem;
	printf("enter a string:");
	gets(str);
	while(str[i]!=0)
	{
		rem=str[i]%10;
		printf("%s",rem);
		str[i]=str[i]/10;
	}
     str[i]='\0';
	str1[i]=str[i];
		//str[i]='\0';
	printf("\n the reverse string is %s",str1);
	getch();
}
