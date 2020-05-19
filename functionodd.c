//wap to print all odd no from 101 to 200
#include<stdio.h>
void oddno(int,int);
int main()
{
	oddno(101,200);
	getch();	
}
void oddno(int x,int y)
{
	while(x<=y)
	{
		if(x%2==1)
		printf("%d\t",x);
		x++;
	}
}
