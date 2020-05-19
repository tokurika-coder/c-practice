//wap to print pattern
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("enter the no of rows");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{
		for(j=0;j<=4;j++)
		printf("%d ",i);
		printf("\n\n");
	}
	getch();
}
