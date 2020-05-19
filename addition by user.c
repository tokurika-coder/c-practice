//wap to perform add as user want
#include<stdio.h>
int main()
{
	float n,sum=0;
	char choice;
	do
	{
		printf("enter the value of n");
		scanf("%f",&n);
		sum=sum+n;
		printf("\ndo you want to add more no(y/n)");
		fflush(stdin);
		//choice=getchar();
		scanf("%c",&choice);
			}
			while(tolower(choice)=='y');
			printf("\nsum=%.2f",sum);
			getch();
}
