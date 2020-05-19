//wap related to the bomnus on 209 9 example
#include<stdio.h>
int main()
{
	float bs,bonus,ts;
	int gender;
	printf("enter the basic salary \t gender");
	scanf("%f%d",&bs,&gender);
	if(bs<10000)
	bonus+=0.20*bs;
	else
	if(gender==1)
	bonus=0.05*bs;
	else
	bonus=0.10*bs;
	printf("bonus=%.2f",bonus);
	ts=bonus+bs;
	printf("\n**********");
	printf("\ntotal salary=%.2f",ts);
	return 0;
}
