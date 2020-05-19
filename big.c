//write a program to find the bigger no between two number
#include<stdio.h>
int main()
{
	int a,b,big;
	printf("enter two no a and b");
	scanf("%d%d",&a,&b);
//	a>b?printf("%d is big",a):printf("%d is big",b);
big=a>b?a:b;
printf("big=%d",big);
	return 0;
}
