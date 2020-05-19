//write a program to calculate the bigest of three no
#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?a>c?a:c:b>c?b:c;
	printf("big=%d",big);
	return 0;
}
