//wap to find the biggest no amoung three no
#include<stdio.h>
void check(int,int,int);
int main()
{
	int a,b,c;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	check(a,b,c);
	getch();
}
void check(int a,int b,int c)
{
	if(a>b&&a>c)
	printf("a is big");
	if(b>c&&b>a)
	printf("b is big");
	else
	printf("c is big");
}
