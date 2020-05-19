//wap to calculate % of 3 subjects using pointer
#include<stdio.h>
int main()
{
	int m1,m2;
	float m3,perc;
	int *m11,*m22;
	float *m33,*ptr;
	m11=&m1;
	m22=&m2;
	m33=&m3;
	ptr=&perc;
	printf("enter the marks of first subject,2nd subject,3rd subject");
	scanf("%d%d%f",m11,m22,m33);
	*ptr=(*m11+*m22+*m33)/300*100;
	printf("\n the percentage is :%.2f",*ptr);
	getch();
}
