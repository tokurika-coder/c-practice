//write a program to swap three num without third variable
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of first num,second num,third num");
	scanf("%d%d%d",&a,&b,&c);
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	printf("\nvalue of first=%d\t ,value of second=%d\t ,value of third=%d",a,b,c);
	getch();
	}
