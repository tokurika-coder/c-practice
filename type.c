//write a program to calcultae the % of three subjects out of 80 marks each
#include<stdio.h>
int main()
{
	int maths,eng,phy;
	float percent;
	printf("enter the marks of maths ,eng,phy");
	scanf("%d%d%d",&maths,&eng,&phy);
	percent=(maths+(float)eng+phy)/240*100;
	printf("percentage=%.2f%%",percent);
	return 0;
}

