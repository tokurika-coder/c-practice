//wap to find biggest element in array using function
#include<stdio.h>
int bigarr(int[],int);
int main()
{
	int arr[20],i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("big elemt is =%d",bigarr(arr,n));
	getch();
}
int bigarr(int a[],int n)
{
	int i,big=a[0];
	for(i=1;i<n;i++)
		if(a[i]>big)
		big=a[i];
		return big;
		
}
