//wap to perform multiplication
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[5][5],b[5][5],c[5][5],n,m,p,q,k;
	printf("enter the no of rows(n) and columns(m) for array a:");
	scanf("%d%d",&n,&m);
	printf("\nenter the no of rows(p),columns(q) for array b :");
	scanf("%d%d",&p,&q);
	if(m!=p)
	{
	  printf("multiplication not possible");
	  exit(0);
	}
	printf("enter the element of array a:");
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
		scanf("%d",&a[i][j]);
		printf("enter the element of array b:");
		for(i=0;i<p;i++)
		for(j=0;j<q;j++)
		scanf("%d",&b[i][j]);
		printf("\nthe original array a :\n");
		for(i=0;i<n;i++)
		{
		for(j=0;j<m;j++)
			printf("%4d",a[i][j]);
			printf("\n\n");
		}
		printf("\nthe original array b :\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			printf("%4d",b[i][j]);
			printf("\n\n");
		}
		printf("\nthe array c:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
			{  c[i][j]=0;
				for(k=0;k<m;k++)
				{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				printf("%d ",c[i][j]);
			}
			printf("\n\n");
		}
		}
	getch();
}
