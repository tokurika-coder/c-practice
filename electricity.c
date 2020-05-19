//wap to calculate elctricity bill
#include<stdio.h>
int main()
{
	int unit,amount;
	char choice;
	do{
		printf("enter the no of units");
		scanf("%d",&unit);
		if(unit==80)
		amount=unit*2;
		else if(unit>=80&&unit<=200)
		amount=unit*4;
		else if(unit>=200&&unit<=500)
		amount=unit*7;
		else
		amount=unit*10;
		printf("amount=%d",amount);
		printf("do you want add more(y/n)");
		fflush(stdin);
		scanf("%c",&choice);
	}while(tolower(choice)=='y');
	getch();
}
