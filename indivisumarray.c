//wap to add each row individually
#include<stdio.h>
int main()
{
	int i,j,a[5][5],sum=0;
	printf("enter the elements of array");
	for(i=0;i<4;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	printf("\nthe original array is\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);
			sum+=a[i][j];
		}
		printf("\tsum=%d",sum);
		printf("\n\n");  sum=0;
	}
	getch();
}
