//wap to find biggest no using and operater
#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("enter the value of three no");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	big=a;
	if(b>c)
	big=b;
	else
	big=c;
	printf("%d is big",big);
	return 0; 
}
