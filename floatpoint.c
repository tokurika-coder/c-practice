//wap to convert a float point num to an integer
#include<stdio.h>
int main()
{
	int a;
	int *ptr;
	ptr=&a;
	printf("enter the value of a");
	scanf("%d",ptr);
	printf("\n the value of a is%.2f",(float)*ptr);
	getch();
}
