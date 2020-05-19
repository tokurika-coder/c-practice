//wap to add all the elements of array using another pointer
#include<stdio.h>
int main()
{
	int i,arr[50],n,sum=0;
	int *ptr;
	ptr=&arr[0];
	printf("enter the value of n");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=0;i<n;i++)
	{
		ptr=&arr[i];
		scanf("%d",ptr);
	}
	for(i=0;i<n;i++)
	{
		ptr=&arr[i];
		printf("\n%d",*ptr);
		sum+=*ptr;
		ptr++;
	}
	printf("\n sum=%d",sum);
	getch();
}
