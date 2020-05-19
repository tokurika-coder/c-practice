//wap to transpose a 2d array
#include<stdio.h>
int main()
{
	int i,j,a[5][5];
	printf("enter the elements of array");
	for(i=0;i<4;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	printf("\n the original array\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\nthe transposed array is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%4d",a[j][i]);	
		printf("\n\n");
	}
	getch();
}
