//wap to print pattern
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("enter the no of rows");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d ",i);
		printf("\n\n");
	}
	getch();
}
