//wap tp print pyramid pattern
#include<stdio.h>
int main()
{
	int i,j,row,sp,loc=20;
	printf("enter the no of rows");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(sp=0;sp<=loc;sp++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		printf("* ");
		printf("\n");
		loc-=2;
	}
	getch();
}
