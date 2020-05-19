//wap of operations on characters
#include<stdio.h>
int main()
{
	char num1,num2;
	int num3;
	printf("enter the value of num1");
	scanf("%c",&num1);
	fflush(stdin);
	printf("enter the value of num2");
	scanf("%c",&num2);
	num3=num1+num2;
	printf("%d    %c",num3,num3);
	return 0;
}
