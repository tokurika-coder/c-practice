//wap to print reverse of pyramid pattern
#include<stdio.h>
int main()
{
	int i,j,row,sp,loc=20;
	printf("enter the no of rows");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(j=1;j<=i*2-1;j++)
			printf("* ");
		printf("\n");
			for(sp=0;sp<=loc;sp++)
		printf(" ");
		loc+=2;
	}
	getch();
}
