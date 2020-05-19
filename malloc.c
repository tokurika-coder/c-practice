//wap of malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n,sum=0;
	printf("enter the no of elements :");
	scanf("%d",&n);
	ptr=(int*)malloc(sizeof(int)*n);
	printf("\n enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",ptr+i);
	printf("\n the array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
		sum+=*(ptr+i);
	}
	printf("\n the sum is:%d",sum);
	free(ptr);
	getch();
}
