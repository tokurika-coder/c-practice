//write a program to find the entered no is positive negative or zero
#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a>=0)
	{
		if(a==0)
		printf("zero");
		else
		printf("positive");
	}
	else
	printf("negative");
	return 0;
}
