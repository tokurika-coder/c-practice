//wap of bonus with and operater
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float bs,bonus;
	int gender,ms;
	printf("enter basic salary\t gender\t marital status");
	scanf("%f%d%d",&bs,&gender,&ms);
	if(gender==1&&ms==1||gender==2)
	bonus=0.50*bs;
	else
	if(gender==1&&ms==2)
	bonus=0.45*bs;
	else
	{
		printf("wrong input");
		getch();
		return 0;
	}
	printf("bonus=%.2f",bonus);
	return 0;
}
