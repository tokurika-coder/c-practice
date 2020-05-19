//wap to print table of a given no
#include<stdio.h>
void table(int);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	table(n);
	getch();
}
void table(int n)
{
	int i=1;
	while(i<=10)
	{
		printf("\n%d*%d=%d",n,i,n*i);
		i++;
	}
}
