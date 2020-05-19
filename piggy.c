//write a program to calculate the total amount of money in piggy bank given the coins of rs 10 5 2 1
#include<stdio.h>
int main()
{
	int ten,five,two;
	float one,ta;
	printf("enter the no of ten coins,five coins,two coins,one coins");
	scanf("%d%d%d%f",&ten,&five,&two,&one);
	ta=ten*10+five*5+two*2+one*1;
	printf("total amount=%.2f",ta);
	return 0;
}
