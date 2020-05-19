//write a program to show the use of relational operaters
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first num,second num");
	scanf("%d%d",&a,&b);
	printf("\n%d<%d=%d",a,b,a<b);
	printf("\n%d>%d=%d",a,b,a>b);
	printf("\n%d<=%d=%d",a,b,a<=b);
	printf("\n%d>=%d=%d",a,b,a>=b);
	printf("\n%d!=%d=%d",a,b,a!=b);
	printf("\n%d==%d=%d",a,b,a==b);
	return 0;
}
