//wap to print all even no
#include<stdio.h>
void evenno(int);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	evenno(n);
	getch();
}
void evenno(int n)
{
	int i=0;
	while(i<n)
	{
		if(i%2==0)
		printf("%d\t",i);
		i++;
	}
}
