//wap to calculate simple interest using pointer
#include<stdio.h>
int main()
{
	int pamt,tm;
	float si,roi;
	int *ptr,*time;
	float *sint,*rate;
	ptr=&pamt;
	time=&tm;
	rate=&roi;
	sint=&si;
	printf("enter the value of principle amount,rate of interest,time");
	scanf("%d%f%d",ptr,rate,time);
	*sint=(*ptr**rate**time)/100;
	printf("\n the value of simple interest is :%.2f",*sint);
	getch();
}

