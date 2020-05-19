//wap to add diagonal elenments of 2d array
#include<stdio.h>
int main()
{
	int i,j,a[4][5],sum=0;
	printf("enter the elements of array");
	for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("\nthe original array\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%4d",a[i][j]);
		if(i==j)
		sum+=a[i][j];
	}
	printf("\n\n");
}
printf("sum of diagonal element is %d",sum);
getch();
}

