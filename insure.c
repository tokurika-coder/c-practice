//wap to determine wheather a driver is insured or not under following conditions
#include<stdio.h>
int main()
{
	int ms,age,gender;
	printf("enter the marital status\tgender\tage");
	scanf("%d%d%d",&ms,&gender,&age);
	if(ms==1)
	if(gender==1)
	if(age>30)
	printf("insured");
	else
	printf("not insured");
	else
	if(age>25)
	printf("insured");
	else
	printf("not insured");
	else
	printf("insured");
	return 0;
}
