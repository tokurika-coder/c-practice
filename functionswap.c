//wap of swapping two no with function
#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b,sp;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
    sp=swap(a,b);
	getch();
}
int swap(int a,int b)
{
	int swap,temp;
	temp=a;
	a=b;
	b=temp;
	printf("the value of a is :%d",a);
	printf("the value of b is :%d",b);
	return b;
}
