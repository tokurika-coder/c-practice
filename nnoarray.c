//wap to read and display n no using an array
#include<stdio.h>
int main()
{
	int arr[20],i,n;
	printf("enter the no to display");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("\nthe array elements are");
	for(i=0;i<n;i++)
	printf("\narr[%d]=%d\n",i,arr[i]);
	getch();
}
