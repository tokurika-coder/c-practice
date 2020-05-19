//write a program to swap three num using third variable
#include<stdio.h>
int main()
{
	int a,b,c,temp;
	printf("enter the value of first num,second num,third num");
	scanf("%d%d%d",&a,&b,&c);
	temp=a;
	a=b;
	b=c;
	c=temp;
	printf("value of first=%d\t ,value of second=%d\t ,value of third=%d",a,b,c);
	getch();
}
