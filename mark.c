//write a program to calculate the percentage of three subjects asssume that each subject is of 80
#include<stdio.h>
int main()
{
	int maths,phy;
	float eng,percent;
	printf("enter the marks in maths ,in eng,in phy");
	scanf("%d%f%d",&maths,&eng,&phy);
	percent=(maths+eng+phy)/240*100;
	printf("percentage=%.2f%%",percent);
	return 0;
}
