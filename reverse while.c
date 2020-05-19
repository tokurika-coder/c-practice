//wap to reverse a given no
#include<stdio.h>
int main()
{
	int n,rem;
	printf("enter the value of n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		printf("%d",rem);
		n/=10;
	}
	return 0;
}
