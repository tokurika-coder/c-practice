//wap to check wheather a given no is even or odd
#include<stdio.h>
void check(int);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	check(n);
	getch();
}
void check(int n)
{
	if(n%2==0)
	printf("\neven no");
	else
	printf("odd no");
}
