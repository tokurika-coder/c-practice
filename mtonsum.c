//wap to calculate the sum of numbers from m to n
#include<stdio.h>
int main()
{
	int m,n,sum=0;
	printf("enter the value of m");
	scanf("%d",&m);
	printf("enter the value of n");
	scanf("%d",&n);
	while(m<=n)
	{
		sum=sum+m;
		m++;
	}
	printf("%d",sum);
	return 0;
	}
