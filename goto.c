//wap with go to st
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	if(a>=b)
	goto first;
	else
	goto second;
	first:
		c=a+b;
		d=a-b;
		goto last;
		second:
			c=a*b;
			d=a%b;
			last:
				printf("c=%d\td=%d",c,d);
				getch();
}
