//wap to calculate % of thre subjects
#include<stdio.h>
float per(float,int,int);
int main()
{
	int m2,m3;
	float m1,perc;
	printf("enter the marks of first subject,2nd,third");
	scanf("%f%d%d",&m1,&m2,&m3);
	perc=per(m1,m2,m3);
	printf("\n parcentage=%.2f",perc);
	getch();
}
float per(float m1,int m2,int m3)
{
	float per;
	per=(m1+m2+m3)/300*100;
	return per;
}
