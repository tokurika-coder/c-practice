//write a program to calculate simple interest
#include<stdio.h>
int main()
{
	int pamt,tm;
	float roi,si;
	printf("enter the value of principle amount ,rate of interest ,time");
	scanf("%d%f%d",&pamt,&roi,&tm);
	si=pamt*roi*tm/100;
	printf("\n simple interset is=%.2f",si);
	return 0;
}
