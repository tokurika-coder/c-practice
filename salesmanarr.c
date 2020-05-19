// in a small company there are 5 salesman .each salesman is supposed to sell 3 products .wap using 2d array to 
// print total sales by each salesman 2) total sales of each item
#include<stdio.h>
int main()
{
	int i,j,a[5][3],totalsale=0;
	for(i=0;i<5;i++)
	{
			printf("enter the no of item sale by salesman - %d",i);
		for(j=0;j<3;j++)
		{
				scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\ntotal sales by salesman- %d\n",i);
		totalsale+=a[i][j];  totalsale=0;
		}
		printf("\n\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("\ntotal sales of item %d",j);
			totalsale+=a[j][j];  totalsale=0;
		}
		printf("\n\n");
	}
	getch();
}
