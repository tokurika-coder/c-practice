//wap to calculate swapping of two no
#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\n a=%d\t b=%d",a,b);
	getch();
}
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
