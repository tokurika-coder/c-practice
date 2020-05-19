//wap to calculate the factorial of a number
#include<stdio.h>
int main()
{
	int n;
	long int fact;
	int *pn;
	long int *fct;
	pn=&n;
	fct=&fact;
	printf("enter the value of n");
	scanf("%d",pn);
	*fct=1;
	while(*pn>0)
	{
		*fct=*fct**pn;
		*pn--;
	}
		printf("\n the factorial of number is:%ld",*fct);
		getch();
}
