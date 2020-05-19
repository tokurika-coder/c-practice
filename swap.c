//write a program to swap two num using temp variable
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of first number");
	scanf("%d",&a);
	printf("enter the value of second num");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
//	printf("the first num a=%d",a);
//	printf("\nthe second num b=%d",b);
	return 0;
	
}
