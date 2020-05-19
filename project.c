#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int you,computer;
int menu()
{
	int ch;
	printf("\n1. select rock");
	printf("\n2. select paper");
	printf("\n3. select scissor");
	printf("\n4. exit");
	printf("\n enter your choice");
	scanf("%d",&ch);
	return ch;
}
void setup()
{
	label:
	computer=rand()%4;
	if(computer==0)
	goto label;
	you=menu();
}
void makelogic()
{
	switch(you)
	{
		case 1:
			if(computer==1)   //you=rock,computer=rock
			{
				printf("\ngame draw");
				printf("\nyou=rock\ncomputer=rock");
			}
			else if(computer==2)  //you=rock,computer=paper
			{
				printf("\ncomputer won");
				printf("\nyou=rock\ncomputer=paper");
			}
			else     //you=rock,computer=scissor
			{
				printf("\nyou won");
				printf("\nyou=rock\ncomputer=scissor");
			}
			break;
		case 2:
			if(computer==1)  //you=paper,computer=rock
			{
				printf("\nyou won");
			    printf("\nyou=paper\ncomputer=rock");
			}
			else if(computer==2)   //you=paper,computer=paper
			{
				printf("\ngame draw");
				printf("\nyou=paper\ncomputer=paper");
			}
			else    //you=paper,computer=scissor
			{
				printf("\ncomputer won");
				printf("\nyou=paper\ncomputer=scissor");
			}
			break;
		case 3:
			if(computer==1)  //you=scissor,computer=rock
			{
				printf("\ncomputer won");
				printf("\nyou=scissor\ncomputer=rock");
			}
			else if(computer==2)  //you=scissor,computer=paper
			{
				printf("\nyou won");
				printf("\nyou=scissor\ncomputer=paper");
			}
			else   //you=scissor,computer=scissor
			{
				printf("\ngame draw");
				printf("\nyou=scissor\ncomputer=scissor");
			}
			break;
		case 4:
			 exit(0);
		default:
		     printf("\ninvalid user choice");	
	}
}
int main()
{
	while(1)
	{
		system("cls");
		setup();
		makelogic();
		getch();
	}
	return 0;  
}
