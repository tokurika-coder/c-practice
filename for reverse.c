//wap to reverse a no with for
#include<stdio.h>
int main()
{
	int n,rem;
	printf("enter the value of n");
	scanf("%d",&n);
	for( ;n>0;n/=10)
	{
		rem=n%10;
		printf("%d",rem);
	}
	return 0;
}
