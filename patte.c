//wap to print pattern
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("enter the no of rows");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i*2-1;j++)
		printf("* ");
		printf("\n\n");
	}
	getch();
}
