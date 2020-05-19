//wap to calculate bonus using character
#include<stdio.h>
int main()
{
	float bs,bonus;
	char gender,ms;
	printf("enter the basic salary \t gender \tmarital status");
	scanf("%f %c %c",&bs,&gender,&ms);
	if(toupper(gender)=='M')
	if(tolower(ms)=='m')
	bonus=0.50*bs;
	else
	bonus=0.45*bs;
	else
	if(toupper(gender)=='F')
	bonus=0.50*bs;
	else
	{
	printf("\nwrong input");
	getch();
	return 0;
}
printf("bonus=%.2f",bonus);
return 0;
}
