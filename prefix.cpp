//write a program to illustrate the use of unary prefix increment and decrement operater 
#include<stdio.h>
int main()
{
	int a,b,num1,num2;
	printf("enter any value of a");
	scanf("%d",&a);
num1=++a;
	printf("incresed value of num1=%d",num1);
	printf("\nenter the value of b");
	scanf("%d",&b);
	num2=--b;
	printf("decreased value of num2=%d",num2);
	return 0;
}
