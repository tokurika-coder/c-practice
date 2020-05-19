//wap to calculate area of circle using pointer
#include<stdio.h>
int main()
{
	int r;
	float ar;
	int *pr;
	float *parea;
	pr=&r;
	parea=&ar;
	printf("enter the radius of circle");
	scanf("%d",pr);
	*parea=3.14**pr**pr;
	printf("\n the areaa of circle is:%.2f",*parea);
	getch();
}
