//wap to input a character and print whether it is small alphabet or capital alphabet or special symbol
#include<stdio.h>
int main()
{
	char ch,choice;
	do
	{
		printf("\nenter the value of ch");
ch=getche();
		printf("\n%d  %c",ch,ch);
		if(ch>=65&&ch<=90)
		printf("capital alphabet");
		else if(ch>=97&&ch<=122)
		printf("small alphabet");
		else
		printf("special symbols");
		printf("\ndo you want to enter any char(y/n)");
		fflush(stdin);
		scanf("%c",&choice);
	}while(tolower(choice)=='y');
	getch();
}

