//wap to add no input by the user
#include<stdio.h>
int main()
{
	int n,count=1,sum=0;
	while(count<=10)
	{
		printf("enter the value of n");
		scanf("%d",&n);
		sum+=n;
		count++;
	}
	printf("sum=%d",sum);
	getch();
}
