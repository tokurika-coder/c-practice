//wap to calculate simple interest
#include<stdio.h>
float sim(int,float,float);
int main()
{
	int tm;
	float si,pamt,roi;
	printf("enter the value of principle amount ,rate of interest,time");
	scanf("%f%f%d",&pamt,&roi,&tm);
	si=sim(tm,pamt,roi);
	printf("\n simple interest =%.2f",si);
	getch();
}
float sim(int tm,float pamt,float roi)
{
	float sim;
	sim=(pamt*roi*tm)/100;
	return sim;
}
