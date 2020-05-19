//program of character
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	printf("\nthe character is %c",ch);
	fflush(stdin);
	printf("\nenter a letter using getchar()");
	ch=getchar();
	printf("\nthe character is %c",ch);
	fflush(stdin);
	printf("\nenter a letter using getche()");
	ch=getche();
	printf("\nthe character is %c",ch);
	 printf("\nenter aletter using getch()");
	 ch=getch();
	 putchar(ch);
	 printf("\n the character is %c",ch);
	 getch();
}
