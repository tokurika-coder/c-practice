//wap to calculate area of circle using function
#include<stdio.h>
float area(float);
int main()
{
	float r,ar;
	printf("enter the radius of circle");
	scanf("%f",&r);
	ar=area(r);
	printf("\n the area of circle is %f",ar);
	getch();
}
float area(float r)
{
	float area;
	area=3.14*r*r;
	return area;
}
