//wap to find the factorial of a no
#include<stdio.h>
int main()
{
	int n;
	long int fact=1;
	printf("enter the value of n");
	scanf("%d",&n);
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	printf("factorial=%d",fact);
	getch();
}
