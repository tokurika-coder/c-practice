//write a program to check a given no is even or odd
#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	a%2==0?printf("%d is even",a):printf("%d is odd",a);
	return 0;
}

