//wap to calculate area and perimeter of rectangle using function
#include<stdio.h>
void arpr(float,float,float*,float*);
int main()
{
	float ln,br,ar,pr;
	printf("enter the value of length and breadth of rectangle");
	scanf("%f%f",&ln,&br);
	arpr(ln,br,&ar,&pr);
	printf("\n area=%.2f\t perimeter=%.2f",ar,pr);
	getch();
}
void arpr(float x,float y,float*area,float*peri)
{
	*area=x*y;
	*peri=2*x+2*y;
}

