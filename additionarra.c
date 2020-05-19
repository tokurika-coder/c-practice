//wap to perform addition of two matrices
#include<stdio.h>
int main()
{
	int i,j,a[5][5],b[5][5],c[5][5],n,m,p,q;
	printf("enter the value of row(n),column(m) of a");
	scanf("%d%d",&n,&m);
	printf("\nenter the no of rows(p),columns(q) of b");
	scanf("%d%d",&p,&q);
	printf("\nenter the elemnts of array a ");
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
	printf("\nenter the element of array b ");
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
	printf("\nthe array c is\n");
		if(n==p&&m==q)
		{
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
		c[i][j]=a[i][j]+b[i][j];
		printf("%d ",c[i][j]);
	}
	printf("\n\n");
	}
	}
}
}
else
printf("addition is not possible");
	getch();
}

