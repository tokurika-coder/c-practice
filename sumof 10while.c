//wap to calculate the sum of first 10 numbers
#include<stdio.h>
int main()
{
	int n=1,sum=0;
	while(n<=10)
	{
		sum=sum+n;
		n++;
	}
	printf("%d",sum);
	return 0;
}
