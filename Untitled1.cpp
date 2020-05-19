//wap to perform multiplication
#include<stdio.h>
int main()
{
	int i,j,a[5][5],b[5][5],c[5][5],n,m,p,q,k;
	printf("enter the no of rows(n) and columns(m) for array a:");
	scanf("%d%d",&n,&m);
	printf("\nenter the no of rows(p),columns(q) for array b :");
	scanf("%d%d",&p,&q);
	if(m==p)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
			{  c[i][j]=0;
				for(k=0;k<m;k++)
				{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				printf("%d ",c[i][j]);
			}
			}
			printf("\n\n");
		}
	}
	getch();
}
