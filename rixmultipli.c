//wap to perform multiplication of two matrices
#include<stdio.h>
int main()
{
	int i,j,a[5][5],b[5][5],c[5][5],n,m,p,q,k;
	printf("enter the no of rows(n),columns(m) of a array : ");
	scanf("%d%d",&n,&m);
	printf("\nenter the no of rows(p),columns(q) of b : ");
	scanf("%d%d",&p,&q);
	printf("\nenter the elements of array a");
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
	printf("\nenter the elements of  array b");
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
	scanf("%d",&b[i][j]);
	printf("\nthe original array a is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%4d",a[i][j]);
		printf("\n\n");
	}
	printf("\nthe original array b is\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		printf("%4d",b[i][j]);
		printf("\n\n");
	}
	printf("\n the array c is\n");
		if(m==p)
		{ 
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
					{for(k=0;k<m;k++)
					{
						c[i][j]=c[i][j]+a[i][k]*b[k][j];
						printf("%d ",c[i][j]);
					}
				}
				printf("\n\n");  c[i][j]=0;
			}
		}
	}
	}
	else
	printf("\nmultiplication is not possible");
	getch();
	}
