//write a program to find greatest of three num
#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("a is big=%d",a
		);
	}
	if(b>c)
	{
		if(b>a)
		printf(" big is b=%d",b);
	}
	else
	printf("big is c=%d",c);
	return 0;
}

