//wap of area of circle using malloc
#include<stdio.h>
#define pi 3.14
int main()
{
	float area;
	int radius;
	printf("enter the radius of circle");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("\n area=%.2f",area);
	getch();
}
