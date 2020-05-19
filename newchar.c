//wap to input a character and print wheather it is a  special symbol or small alphabet or capital alphabaet or no 
#include<stdio.h>
int main()
{
	char ch,choice;
	do
	{
		printf("enter any character : ");
	ch=getche();
		printf("\n%d   %c",ch,ch);
		printf("\ndo you want print more(y/n)");
		fflush(stdin);
		scanf("%c",&choice);
	}
	while(tolower(choice)=='y');
	getch();
  }  
