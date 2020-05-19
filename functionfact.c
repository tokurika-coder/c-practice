//wap to calculate the factorial of a no
#include<stdio.h>
long int fact(int);
int main()
{
	int n;
	long int ft;
	printf("enter the value of n");
	scanf("%d",&n);
	ft=fact(n);
	printf("factorial =%ld",ft);
	getch();
}
long int fact(int n)
{
	long int fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	return fact;
}
