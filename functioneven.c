//wap to print all even no from 10 to 80
#include<stdio.h>
void evenno(int,int);
int main()
{
	evenno(10,80);
	getch();
}
void evenno(int x,int y)
{
	while(x<=y)
	{
		if(x%2==0)
			printf("%d\t",x);
			x++;
	}
}
