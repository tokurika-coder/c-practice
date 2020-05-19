//wap to calculate bonus given to an employ organisation based upon following condiotion
//if employ is male and male is married then bonus=50%of the basic salary
//if male is unmarried then bonus is 45% of basic salary
//if employ is female then bonus is 50% of basic salary
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float bs,bonus;
	int gender,ms;
	printf("enter the basic salary\t gender\t marital status");
	scanf("%f%d%d",&bs,&gender,&ms);
	if(gender==1)
	if(ms==1)
	bonus=0.50*bs;
	else
	bonus=0.45*bs;
	else
	if(gender==2)
	bonus=0.50*bs;
	else
	{
	printf("wrong input");
	getch();
	exit(0);
	}
	printf("bonus=%.2f",bonus);
	return 0;
}
