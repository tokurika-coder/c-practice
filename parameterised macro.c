//wap of area using parameterised macro
#include<stdio.h>
#define pi 3.14
#define area(r) pi*r*r
int main()
{
	int rad;
	printf("enter thr radius");
	scanf("%d",&rad);
	printf("\n area=%.2f",area(rad));
	getch();
}
