//wap of factorial with for
#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for( ;n>0;n--)
	{
		fact=fact*n;
	}
	printf("factorial=%d",fact);
	getch();
}
