//write a program to calculate the roots of a given equation
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x,y;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	x=(-b+sqrt(b*b-4*a*c))/(2.0*a);
	printf("first root=%.2f",x);
	y=(-b-sqrt(b*b-4*a*c))/(2.0*a);
	printf("\nsecond root =%.2f",y);
getch();
	}
