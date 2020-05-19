//wap to print pattern
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("enter the no of rows");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=5;j>=i;j--)
			printf("%d ",j);
			printf("\n\n");
            j--;  i=1;
	}
	getch();
}
